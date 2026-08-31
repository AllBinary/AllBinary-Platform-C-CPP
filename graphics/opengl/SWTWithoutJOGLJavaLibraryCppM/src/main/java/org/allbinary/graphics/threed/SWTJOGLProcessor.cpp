
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GLHolder.h"
#include "RatioProcessor.h"
//SWTWithoutJOGL
class SWTJOGLProcessor
            : public Object
        : public Runnable {
        

    private: static const instance: SWTJOGLProcessor = new SWTJOGLProcessor();

    public static SWTJOGLProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SWTJOGLProcessor.instance;
    
}


    public glHolder: GLHolder = new class extends GLHolder
                                {
                                
    public run(any = {} renderer){
}

                                }
                            ;

    public init(any = {} display, any = {} comp){
}


    public bool isHolderCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return glHolder!.isCreated;
    
}


    public setRenderer(any = {} renderer){
}


    public bool isJOGL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public createSurface(){
}


    public onSurfaceCreated(){
}


    public onSurfaceChangedForEvent(any = {} event){
}


    public onSurfaceChanged(){
}


    public onSurfaceChangedWH(int32_t width, int32_t height){
}


    public addListener(){
}


    public addListeners(MIDlet midlet){
}


    public run(){
}


    public clear(){
}


    public setCustom(int32_t width, int32_t height, float ratio){
}


    public setRatioProcessor(RatioProcessor ratioProcessor){
}


    public int32_t charWidth(Font font, char ch){



                            throw new RuntimeException();
                    
}


    public int32_t charsWidth(Font font, std::vector<char> ch, int32_t offset, int32_t length){



                            throw new RuntimeException();
                    
}


    public int32_t stringWidth(Font font, string str){



                            throw new RuntimeException();
                    
}


    public int32_t substringWidth(Font font, string str, int32_t offset, int32_t len){



                            throw new RuntimeException();
                    
}


};

            

