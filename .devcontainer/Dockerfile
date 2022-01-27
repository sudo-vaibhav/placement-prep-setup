FROM openjdk 
RUN microdnf install git
RUN microdnf install nodejs
RUN microdnf install python3
RUN microdnf install gcc-c++  gcc
RUN npm i -g nodemon
RUN touch ~/.bashrc
RUN echo "alias python=python3" >> ~/.bashrc