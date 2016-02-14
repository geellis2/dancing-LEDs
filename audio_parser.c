//correct includes 

void parse_audio(char ** argv){
    //TODO: finish defining
    SOMEVAR device;
    open_device(&device);
    
    int notFinished = 1;//haven't determined end conditions
    while(notFinished){
        parse_buffer(/*TODO:args*/);
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
char * open_device(char * device/*TODO:args*/){
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
      */
    snd_pcm_format_t = SND_PCM_FORMAT_16;   //sampling format
    int rate = 44100;
    int channels = 1;
    snd_pcm_sframes_t buffer_size;
    snd_pcm_sframes_t period_size;
    snd_output_t *output = NULL;
    

    //declare more variables?
 
   
}

int set_params(snd_pcm_t * handle, snd_pcm_hw_params_t *params /* more parameters?*/){
    int err;
    unsigned int rrate;
    err = snd_pcm_hw_params_any(handle, params); 
    //"Fill params with a full configuration space for a PCM."
    if( err < 0)
        {printf("bad configuration: %s\n", snd_strerror(err)); return err;}
    
    //can set: access, format, subformat, channels*, rate, export_buffer, period*,
    //         buffer_time*, buffer_size*
    //need to set: ???
    //format similar to above if statement
}


