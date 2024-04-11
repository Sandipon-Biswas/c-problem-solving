# Function to process each test case
def process_test_case():
    # Input number of elements and number of operations
    n, k = map(int, input().split())
    
    # Input the list of elements
    v = list(map(int, input().split()))
    
    # Iterate over k steps
    for i in range(1, k+1):
        if v:
            if i % 2 != 0:
                if v[0] == 1:
                    v.pop(0)  # Remove the first element
                else:
                    v[0] -= 1
            else:
                if v[-1] == 1:
                    v.pop()  # Remove the last element
                else:
                    v[-1] -= 1
    
    # Output the count of remaining elements
    print(n if not v else n - len(v))

# Input number of test cases
tt = int(input())

# Process each test case
for _ in range(tt):
    process_test_case()


