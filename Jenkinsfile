pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                script {
                    checkout([$class: 'GitSCM', 
                        branches: [[name: '*/main']], 
                        userRemoteConfigs: [[
                            url: 'https://github.com/AaryanAshok/GIT_Play.git', 
                            credentialsId: 'github-cred'
                        ]]
                    ])
                }
            }
        }
        stage('Build') {
            steps {
                echo 'Building...'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}
