//correct includes 

void parse_audio(char ** argv){
    //TODO: finish defining
    SOMEVAR device;
    open_device(&device);
    
    int notFinished = 1;//haven't determined end conditions
    while(notFinished){
        parse_frame(/*TODO:args*/);
        //wait for a second? make sure that parsing is synchronous.
    }
    close_device(device);
    //TODO:free any memory.
}

void parse_buffer(/*TODO:args*/){
    /**TODO: unsure about procedure here.
     *( fyi second is pretty unreasonable)
     * more likely we will parse some number of frames
     * where a frame is the collection of samples for all channels
     * a sample is the amplitude of audio in a single channel
     * probably using interleavend audio? research this.
     * sample clock (probably system clock)
     *
     * 1) get data
     * 2) determine important notes?
     * 3) create graph node(s)?
     * 4) play on LEDs
     * 
     * need to watch out for xruns
     */

    //TODO:free any memory.
    return;
}
char * open_device(/*TODO:args*/){
    /*TODO: read from a file in /dev/dsp?
     * This link has a lot of useful references:
     * http://stackoverflow.com/questions/9781797/how-to-get-voice-in-raw-format-by-using-mic-in-linux
     */
     /* using ALSA?
      * TODO:
      *     1) open audio device
      *     2) allocte parameter structure?
      *     3) set access type?
      *     4) set sample format
      *     5) set sample rate
      *     6) set channel count
      *     7) set other parameters
      *         i: buffer size
      *         ii: interupt interval?
      *         iii: others...
      *     8) now you can use it?
      *

}
