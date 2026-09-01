
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
        



            #include <vector>
        
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

    private: static SWTJOGLProcessor instance() { return SWTJOGLProcessor(); }

    public: static SWTJOGLProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SWTJOGLProcessor::instance();
    
}


    public: GLHolder glHolder = class extends GLHolder
                                {
                                
    public: void run(Object* renderer){
}

                                }
                            ;

    public: void init(Object* display, Object* comp){
}


    public: bool isHolderCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return glHolder.isCreated;
    
}


    public: void setRenderer(Object* renderer){
}


    public: bool isJOGL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void createSurface(){
}


    public: void onSurfaceCreated(){
}


    public: void onSurfaceChangedForEvent(Object* event){
}


    public: void onSurfaceChanged(){
}


    public: void onSurfaceChangedWH(int32_t width, int32_t height){
}


    public: void addListener(){
}


    public: void addListeners(MIDlet midlet){
}


    public: void run(){
}


    public: void clear(){
}


    public: void setCustom(int32_t width, int32_t height, float ratio){
}


    public: void setRatioProcessor(RatioProcessor ratioProcessor){
}


    public: int32_t charWidth(Font font, char ch){



                            throw RuntimeException();
                    
}


    public: int32_t charsWidth(Font font, std::vector<char> ch, int32_t offset, int32_t length){



                            throw RuntimeException();
                    
}


    public: int32_t stringWidth(Font font, std::string str){



                            throw RuntimeException();
                    
}


    public: int32_t substringWidth(Font font, std::string str, int32_t offset, int32_t len){



                            throw RuntimeException();
                    
}


};

            

