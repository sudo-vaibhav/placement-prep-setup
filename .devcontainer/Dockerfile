# needed for java
FROM openjdk 

# needed for version control from within container
RUN microdnf install git

# needed for javascript
RUN microdnf install nodejs

# needed for python
RUN microdnf install python3

# needed for c and c++
RUN microdnf install gcc-c++  gcc

# for debugging node js
RUN npm i -g nodemon

# eliminiating repetitive steps and making python work with code builder
# extension out of box
RUN touch ~/.bashrc
RUN echo "alias python=python3" >> ~/.bashrc