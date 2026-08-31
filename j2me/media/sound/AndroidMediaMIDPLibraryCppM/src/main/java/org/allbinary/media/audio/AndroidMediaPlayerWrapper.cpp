
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/android/NullAndroidCanvas.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlayer.h"

class AndroidMediaPlayerWrapper: public BasicPlayer {
        

    public static AndroidMediaPlayerWrapper createPlayerWrapper(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidMediaPlayerWrapper(StringUtil.getInstance()!.EMPTY_STRING);
    

                //: 
} catch(e) 
            {



                            throw new RuntimeException();
                    
}

}


    public static const NULL_ANDROID_MEDIA_PLAYER_WRAPPER: AndroidMediaPlayerWrapper = AndroidMediaPlayerWrapper.createPlayerWrapper()!;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: mediaPlayer: MediaPlayer = NullAndroidCanvas.NULL_MEDIA_PLAYER;

public constructor (string resource){

            super();
        
        try {
            
                        if(resource == StringUtil.getInstance()!.EMPTY_STRING)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;;
    

    mediaPlayer: MediaPlayer = MediaPlayer.create(resourceUtil!.getContext(), resourceUtil!.getResourceId(resource)!.intValue())!;;
    

                        if(mediaPlayer == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception(new StringMaker().append("Failed to create media player for: ")!.append(resource)!.append(" with id: ")!.append(resourceUtil!.getResourceId(resource)!.toString())!.toString());
                    

                                    }
                                
this.setMediaPlayer(mediaPlayer);
    
this.mediaPlayer!.setLooping(false);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION_LABEL +resource, this, this.commonStrings!.CONSTRUCTOR, e);
    



                            throw e;
                    
}

}


    public setLoopCount(int32_t count){
super.setLoopCount(count);
    

                        if(this.mediaPlayer != NullAndroidCanvas.NULL_MEDIA_PLAYER && this.mediaPlayer != 
                                    null
                                )
                        
                                    {
                                    
                        if(count == 0)
                        
                                    {
                                    this.mediaPlayer!.setLooping(false);
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPlayerListener(PlayerListener playerListener){
super.addPlayerListener(playerListener);
    
}


    public removePlayerListener(PlayerListener playerListener){
super.removePlayerListener(playerListener);
    
}


    public int32_t getState(){

                        if(this.mediaPlayer!.isPlaying())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlayerI.STARTED;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlayerI.PREFETCHED;
    

                        }
                            
}


    public close(){

        try {
            this.mediaPlayer!.release();
    
this.mediaPlayer= NullAndroidCanvas.NULL_MEDIA_PLAYER;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CLOSE, e);
    
}

}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public start(){

        try {
            
                        if(this.mediaPlayer!.isPlaying())
                        
                                    {
                                    this.mediaPlayer!.pause();
    
this.mediaPlayer!.seekTo(0);
    

                                    }
                                
this.mediaPlayer!.start();
    
super.start();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.START_METHOD_NAME, e);
    
}

}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop(){

        try {
            this.mediaPlayer!.stop();
    
this.mediaPlayer!.prepare();
    
super.stop();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "stop", e);
    
}

}


    public update(string event){
this.logUtil!.putF("LineEvent: " +event, this, this.commonStrings!.UPDATE);
    

    size: int32_t = this.listenersList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    listener: PlayerListener = this.listenersList!.objectArray[index]! as PlayerListener;;
    
listener.playerUpdate(this, event, NullUtil.getInstance()!.NULL_OBJECT);
    
}

}


    public setVolume(int32_t leftVolume, int32_t rightVolume){
this.mediaPlayer!.setVolume((leftVolume) /100.0, (rightVolume) /100.0);
    
}


    public int64_t getDuration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mediaPlayer!.getDuration();
    
}


    public setMediaPlayer(MediaPlayer mediaPlayer){
this.mediaPlayer= mediaPlayer;
    
}


    public MediaPlayer getMediaPlayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mediaPlayer;
    
}


};

            

