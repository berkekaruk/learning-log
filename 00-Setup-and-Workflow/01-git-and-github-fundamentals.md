# ⏱️ GitHub fundamentals
### Documenting the common way of working with GitHub and fundamental processes.

---

## Common workflow
1. Pulling latest changes from main branch:
```console
git pull origin main
```
2. Switching to an existing or creating and switching to a new branch:
```console
git checkout [existingBranchName]
```

```console
git checkout -b [newBranchName]
```

3. Staging all files in the working directory and committing afterward:
```console
git add .
git commit -m "[commit message]"
```
4. Pushing the current branch:
```console
git push origin [existingBranchName]
```
5. Opening and reviewing the pull request on GitHub.

6. Merging the current branch into main.

---

## Processes
### Branch
Independent line of development based on a copy of the current state of the project, which lets one work on changes without affecting the main branch until merging it back.

### Checkout
Using the checkout command, one switches the current branch to another existing branch or allows creating and switching to a new one.

### Commit
Snapshot of the entire project at a specific point in time. Git creates an individual ID (SHA/Hash) to identify the change, its author, the timestamp, and a commit message to briefly describe the adaptation.

### Continous Integration (CI)
Automated build and test process for committed changes on configured repositories for identifying errors early.

### Fetch
Process of loading changes from origin to the local work branch but without merging, so that changes can be viewed before integrating them into the current branch.

### Fork
Complete copy of an existing repository into an own GitHub profile as a new and independent repository.

### Git
Open-source program for tracking changes to text files and serving as the foundation for GitHub.

### GitHub
Collaboration platform that uses Git for versioning and hosting repositories.

### License
Document that specifies the rights of third parties in terms of how to use the project's codebase.

### Markdown
Semantic file format displayed similar to a website, including links, lists, and enumerations; supported by GitHub and commonly used for documentation purposes.

### Master
Standard primary branch in GitHub repositories (formerly commonly named "master").

### Merge
Process of applying changes from one branch to another inside the same repository, either manually after a fetch or as part of a pull request.

### Merge conflict
Conflict between two changes to the same line inside the same file which has to be resolved manually to continue merging two branches.

### Pull
Fetching and immediately merging changes, for instance, to work on the latest version of code locally.

### Pull Request
Suggestion of a change to a repository that is submitted by developers to the project members of a repository to approve or reject the request.

### Pull Request Review
Process of reviewing the pull request by project members of the repository, which includes commenting on the request and either an approval or further demands on the change before merging.

### Push
Process of sending committed changes to a remote repository on GitHub so that formerly local changes become available for everyone with repository access.

### Rebase
Process of moving or combining a sequence of commits to a new base commit to create a cleaner, linear project history.

### Repository
Contains all project files and saves the revision history of each file, comparable to a project directory.

### Version control
System to track changes to files over time, allowing reverting to previous states (for instance, if mistakes occur) while tracking every modification to code, including who made the change, when, and why.