# Bonus Q4

###### <span style="color:#2318ea">Design a CI/CD system for the application assuming it will be deployed on Kubernetes in production.</span>
*PS: kindly take a look at the corresponding image linked separately* 

There are multiple approaches to defining how a CI/CD Kubernetes pipeline should be deployed,but the popular emerging paradigms are: the pull pattern and the push-type pipeline. The best approach out of these two will be the pull pipeline,specifically known as “GitOps”.
GitOps is a way to do Continuous Delivery. It leverages Git as a single source of truth for declarative infrastructure and applications, providing both revision and change control. With GitOps, a system is run by submitting pull requests (and subsequent merges) to achieve the desired state of the system represented in a Git repository.GitOps with Kubernetes provides next level of infrastructure-as-code and immutable infrastructure through declarative continuous delivery systems. It is a framework which is designed to integrate well with any CI/CD pipeline, even when you utilize third-party tools to manage your pipeline natively. In short, GitOps combines the traditional CI/CD pipelines with Git workflows, allowing for better end-to-end management of Kubernetes and app development. The two are treated as a unified process rather than separate ones.

**Workflow**
The GitOps workflow focuses on how changes are handled. The process starts with new codes being pushed to Git for further review. Once the new codes are cleared and approved, they are then merged to Git. This is where an action for deploying new codes is triggered.Git will trigger the creation of new images by working together with any CD pipeline tool. The process is fully automated, so you only need to define the parameters once. 
In a CI/CD workflow, ideally, you run many tests. If those tests fail, your image will never be built, and you’ll never deploy that container. However, if testing fails to uncover issues, Kubernetes offers better protection because Kubernetes simplifies zero-downtime deployment.
These are the components that make up a Continuous Delivery pipeline:

* Version Control System – a source code repository where changes and updates are pushed

* CI system – an integration and test system that may also build the Docker image

* Docker Registry – the image registry that stores your Docker images

* Kubernetes Cluster – set up with a few clicks in GKE or using one of the available installers
