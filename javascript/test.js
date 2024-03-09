const mongoose = require('mongoose');
const blogModel =require('../models/blogModel');
const userModel = require('../models/userModel');


const getAllBlogController =async (req,res)=>{
    try {
        const blogs = await blogModel.find({}).populate("user");
        await blogModel.find({}).populate("user");
        if (!blogs) {
            return res.status(200).send({
                success:false,
                message:"No Blogs Found"
            });
        }
        return res.status(200).send({
            success:true,
            BlogCount:blogs.length,
            message:'All Blog Found',
            blogs
        })
    } catch (error) {
        console.log(error);
        return res.status(500).send({
            success:false,
            message:'Error when getting all blog',
            error
        })
    }
};
const createBlogController =async (req,res)=>{
    try {
        const {title , description  , image , user}=req.body;
        if(!title||!description|| !image||!user){
            return res.status(400).send({
                success:false,
                message:"please proveide all field",
            })
        }
        const exisitingUser = await userModel.findById(user);
        if(!exisitingUser){
            return res.status(404).send({
                success:true,
                message:'unable ot find user'
            })
        }
        const newBlog = new blogModel ({title,description,image,user});
        const session = await mongoose.startSession();
        session.startTransaction();
        await  newBlog.save({session});
        exisitingUser.blogs.push(newBlog);
        await exisitingUser.save({session});
        await session.commitTransaction();
        await newBlog.save();
        return res.status(201).send({
            success:true,
            message:"blog created",
            newBlog,
        })
    } catch (error) {
        console.log(error);
        return res.status(400).send({
            success:false,
            message:"error ceating blog",
            error
        })
    }
};
const updateBlogColtroller = async(req,res)=>{
    try {
        const {id}=req.params;
        const {title,description,image}=req.body;
        const blog =await blogModel.findByIdAndUpdate(id,{...req.body},{new:true});
        return res.status(200).send({
            success:true,
            message:"blog update successfully",
            blog,
        })
    } catch (error) {
        console.log(error);
        return res.status(400).send({
            success:false,
            message:"Error while updation blog",
            error,
        });
    }
};
const getBlogById = async (req,res) => {
    try {
        const {id}=req.params;
        const blog =await blogModel.findById(id);
        if(!blog){
            return res.status(404).send({
                success:false,
                message:"blog not found by this id",
            })
        }
        return res.status(200).send({
            success:true,
            message:"success to find the blog",
            blog,
        })
    } catch (error) {
        console.log(error);
        return res.status(400).send({
            success:false,
            message:"error when getting single blog",
            error
        })
    }
};
const deleteBlogController = async (req,res)=>{
    try {
        const blog = await blogModel
        // .findOneAndDelete(req.params.id)
        .findByIdAndDelete(req.params.id)
        .populate("user");
      await blog.user.blogs.pull(blog);
      await blog.user.save();
        return res.status(200).send({
            success:true,
            message:"Deleted successfully"
        })
    } catch (error) {
        console.log(error);
        return res.status(400).send({
            succes:false,
            message:"fail to delete the blog",
            error
        })
    }
};
const userBlogController =async(req,res)=>{
    try {
        const userBlog =await userModel.findById(req.params.id).populate("blogs");
        if (!userBlog) {
            return res.status(404).send({
                success:false,
                message:'blogs not found with this id',
            })
        }
        return res.status(200).send({
            success:true,
            message:"found blog with this id",
            userBlog
        })
    } catch (error) {
        console.log(error);
        res.status(400).send({
            success:false,
            message:'error in user blog',
            error
        })
    }
}
module.exports={getAllBlogController,createBlogController,updateBlogColtroller,getBlogById,deleteBlogController,userBlogController};