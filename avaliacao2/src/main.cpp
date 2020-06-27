#include "../include/App.h"

int main(int argc, char* argv[])
{
    App main_app("diary.md");
    return main_app.run(argc, argv);
}
