app=tetrisMain.cpp
export app
echo $app
if [ -f "app" ]; then
    rm ./bin/app
fi

g++ $app -o ./bin/app
./bin/app