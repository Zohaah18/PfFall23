import csv

def read_and_display_csv(file_path):
    with open(file_path, 'r') as csvfile:
        # Create a CSV reader
        csv_reader = csv.reader(csvfile)

        # Read the header
        header = next(csv_reader)
        num_columns = len(header)

        # Initialize counters
        num_rows = 0

        # Print header
        print(", ".join(header))
        print()

        # Iterate through rows and count
        for row in csv_reader:
            num_rows += 1

        # Print total rows and columns
        print(f"Total Rows: {num_rows}")
        print(f"Total Columns: {num_columns}")
        print()

        # Rewind the CSV file to the beginning
        csvfile.seek(0)

        # Skip the header for displaying data
        next(csv_reader)

        # Display data in tabular form
        for row in csv_reader:
            print("|".join(row))

# Replace 'your_file.csv' with the actual path to your CSV file
file_path = 'your_file.csv'
read_and_display_csv(file_path)
