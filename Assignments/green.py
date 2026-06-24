import subprocess
import random
from datetime import datetime, timedelta

# Number of random commits
commits = 20

# Start date
start_date = datetime.now() - timedelta(days=365)

for i in range(commits):

    # Random date within the last year
    random_days = random.randint(0, 364)
    commit_date = start_date + timedelta(days=random_days)

    # Create a file
    with open("activity.txt", "a") as file:
        file.write(f"Commit {i + 1}\n")

    # Add file
    subprocess.run(["git", "add", "."])

    # Commit with random date
    date = commit_date.strftime("%Y-%m-%dT12:00:00")

    subprocess.run([
        "git",
        "commit",
        "-m",
        f"Update activity {i + 1}",
        "--date",
        date
    ])

print("Random commits created!")