
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/emulator/device/TrueTypeFontUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

auto TrueTypeFontUtil::instance_owner() -> TrueTypeFontUtil* { static std::unique_ptr<TrueTypeFontUtil> value(new TrueTypeFontUtil()); return value.get(); }
TrueTypeFontUtil* TrueTypeFontUtil::instance = TrueTypeFontUtil::instance_owner();

    auto TrueTypeFontUtil::getInstance() -> TrueTypeFontUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TrueTypeFontUtil::instance;
    
}


TrueTypeFontUtil::TrueTypeFontUtil() : TrueTypeFontUtilBase(1), fontImage(OpenGLESImage::NULL_OPENGL_IMAGE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TrueTypeFontUtil::getAsTextureSize(int32_t textureSize) -> int32_t{



                            throw RuntimeException();
                    
}


    auto TrueTypeFontUtil::getCellSize(int32_t cellSize) -> int32_t{



                            throw RuntimeException();
                    
}


    auto TrueTypeFontUtil::getFontBitmap(std::string filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor) -> Image*{



                            throw RuntimeException();
                    
}


    auto TrueTypeFontUtil::saveFontAtlasAsFile() -> void{
}


    auto TrueTypeFontUtil::getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor) -> Image*{



                            throw RuntimeException();
                    
}


    auto TrueTypeFontUtil::getFontWidths(std::string filename, int32_t fontSize) -> std::vector<int32_t>{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP
