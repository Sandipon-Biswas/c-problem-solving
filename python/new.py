# Function to solve a single test case
def solve_test_case(n, arr):
    # Check if any element (except the first and last) is greater than the sum of its neighbors
    for i in range(1, n - 1):
        if arr[i] > arr[i - 1] + arr[i + 1]:
            return "NO"
    
    return "YES"

# Main function to handle input and output
def main():
    # Read the number of test cases
    t = int(input().strip())
    
    # Iterate through each test case
    for _ in range(t):
        # Read the size of the array and the array itself
        n = int(input().strip())
        arr = list(map(int, input().strip().split()))
        
        # Output the result for the current test case
        print(solve_test_case(n, arr))

# Execute the main function
if __name__ == "__main__":
    main()

