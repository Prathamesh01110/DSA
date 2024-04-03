import torch

# Create a tensor of random numbers
x = torch.rand(3, 5)  # 3 rows, 5 columns

# Print the tensor
print(x)

# Check if CUDA is available
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
print(f"Using device: {device}")
