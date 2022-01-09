find . -type f -name '*.sh' | tr -d './' | sed 's/\.sh//g'
