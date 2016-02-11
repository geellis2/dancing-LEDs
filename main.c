//use the proper includes


int main(int argc,char ** argv){
    //not sure yet how many args we want
    if(argc < 2){
        printf("Usage: %s followed by <filename>? idk", argv[0]);
        exit(2);//what exit code do we want here?
    }
    //use multiple files? I think yes.
    //call parse audio with argv?
    parse_audio(argv);
    return 0;
}
