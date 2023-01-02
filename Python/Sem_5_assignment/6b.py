import pickle

# Define a variable
data = {
    "a": 1,
    "b": "hello",
    "c": [1, 2, 3]
}

# Save the variable to a file using pickle.dump()
with open("data.pkl", "wb") as f:
    pickle.dump(data, f)

# Restore the variable from the file using pickle.load()
with open("data.pkl", "rb") as f:
    data = pickle.load(f)

print(data)  # {'a': 1, 'b': 'hello', 'c': [1, 2, 3]}
