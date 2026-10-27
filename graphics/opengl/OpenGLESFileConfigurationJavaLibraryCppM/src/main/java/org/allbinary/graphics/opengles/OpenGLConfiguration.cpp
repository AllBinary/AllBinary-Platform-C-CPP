
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"

Object* OpenGLConfiguration::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto OpenGLConfiguration::getInstance() -> OpenGLConfiguration*{

                        if(OpenGLConfiguration::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    OpenGLConfiguration::instance= new OpenGLConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<OpenGLConfiguration*>(OpenGLConfiguration::instance);
    
}


OpenGLConfiguration::OpenGLConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), tsUtil(TsUtil::getInstance()), type(OpenGLFeatureFactory::getInstance()->OPENGL_AS_GAME_THREAD), imageColor(OpenGLFeatureFactory::getInstance()->IMAGE_COLOR_DEPTH_4444), color(OpenGLFeatureFactory::getInstance()->IMAGE_COLOR_DEPTH_4444), versionSelector(OpenGLFeatureFactory::getInstance()->OPENGL_AUTO_SELECT){

        try {
            
                        if(FileFactory::getInstance()->isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto OpenGLConfiguration::read() -> void{

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream* fileInputStream = fileInputStreamFactory->getFileInputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    

    DataInputStream* dataInputStream = new DataInputStream(fileInputStream);;
    

    int32_t openGLValue = dataInputStream->readInt();;
    

                        if(openGLValue == 0)
                        
                                    {
                                    this->setOpenGL(false);
    

                                    }
                                
                             else 
                        if(openGLValue == 1)
                        
                                    {
                                    this->setOpenGL(true);
    

                                    }
                                
                        else {
                            


                            throw Exception("Invalid OpenGL Setting");
                    

                        }
                            

    std::string version = dataInputStream->readUTF();;
    

                        if(this->tsUtil->compareTo(version, openGLFeatureFactory->OPENGL_AUTO_SELECT->getName()) == 0)
                        
                                    {
                                    this->setVersionSelector(openGLFeatureFactory->OPENGL_AUTO_SELECT);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(version, openGLFeatureFactory->OPENGL_MINIMUM->getName()) == 0)
                        
                                    {
                                    this->setVersionSelector(openGLFeatureFactory->OPENGL_MINIMUM);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("OpenGLConfiguration: Error reading version selector: ") +JavaString::valueOf(version));
                    

                        }
                            

    std::string type = dataInputStream->readUTF();;
    

                        if(this->tsUtil->compareTo(type, openGLFeatureFactory->OPENGL_AS_GAME_THREAD->getName()) == 0)
                        
                                    {
                                    this->setType(openGLFeatureFactory->OPENGL_AS_GAME_THREAD);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(type, openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS->getName()) == 0)
                        
                                    {
                                    this->setType(openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS);
    

                                    }
                                
                        else {
                            


                            throw Exception("OpenGLConfiguration: Error reading image color");
                    

                        }
                            

    std::string imageColor = dataInputStream->readUTF();;
    

                        if(this->tsUtil->compareTo(imageColor, openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444->getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(imageColor, openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444->getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(imageColor, openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444->getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("OpenGLConfiguration: Error reading image color: ") +JavaString::valueOf(imageColor));
                    

                        }
                            

    std::string color = dataInputStream->readUTF();;
    

                        if(this->tsUtil->compareTo(color, openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444->getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(color, openGLFeatureFactory->OPENGL_COLOR_DEPTH_565->getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_565);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(color, openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888->getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("OpenGLConfiguration: Error reading color: ") +JavaString::valueOf(color));
                    

                        }
                            
PreLogUtil::put(JavaString::valueOf("Read Configuration: ") +JavaString::valueOf(this->toString()), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLConfiguration::write() -> void{

    Closeable* closeable = NullCloseable::NULL_CLOSEABLE;;
    

        try {
            PreLogUtil::put(JavaString::valueOf("Write Configuration: ") +JavaString::valueOf(this->toString()), this, "write");
    

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream* fileOutputStream = fileInputStreamFactory->getFileOutputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    

    AbDataOutputStream* dataOutputStream = new AbDataOutputStream(fileOutputStream);;
    
closeable= dataOutputStream;
    

                        if(this->isOpenGL())
                        
                                    {
                                    dataOutputStream->writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream->writeInt(0);
    

                        }
                            
dataOutputStream->writeUTF(this->getVersionSelector()->getName());
    
dataOutputStream->writeUTF(this->getType()->getName());
    
dataOutputStream->writeUTF(this->getImageColor()->getName());
    
dataOutputStream->writeUTF(this->getColor()->getName());
    
dataOutputStream->flush();
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

         finally {
            StreamUtil::getInstance()->close(closeable);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    auto OpenGLConfiguration::init() -> void{

    Features* features = Features::getInstance();;
    

                        if(ChangedGameFeatureListener::getInstance()->isChangedFeature(MainFeatureFactory::getInstance()->STATIC))
                        
                                    {
                                    
    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(this->isOpenGL())
                        
                                    {
                                    
                        if(features->isFeature(openGLFeatureFactory->OPENGL_2D) || features->isFeature(openGLFeatureFactory->OPENGL_3D) || features->isFeature(openGLFeatureFactory->OPENGL_2D_AND_3D))
                        
                                    {
                                    
                        if(!features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    this->logUtil->putF("Turning on OpenGL as Default", this, this->commonStrings->INIT);
    
features->addDefault(OpenGLFeatureFactory::getInstance()->OPENGL);
    
this->logUtil->putF(JavaString::valueOf("Using OpenGL Type Feature: ") +JavaString::valueOf(this->getType()), this, this->commonStrings->INIT);
    
features->addDefault(this->getType());
    
this->logUtil->putF(JavaString::valueOf("Using OpenGL ImageColor Feature: ") +JavaString::valueOf(this->getImageColor()), this, this->commonStrings->INIT);
    
features->addDefault(this->getImageColor());
    
this->logUtil->putF(JavaString::valueOf("Using OpenGL Color Feature: ") +JavaString::valueOf(this->getColor()), this, this->commonStrings->INIT);
    
features->addDefault(this->getColor());
    
this->logUtil->putF(JavaString::valueOf("Using OpenGL Version Selector Feature: ") +JavaString::valueOf(this->getVersionSelector()), this, this->commonStrings->INIT);
    
features->addDefault(this->getVersionSelector());
    

                                    }
                                

                                    }
                                
                        else {
                            this->logUtil->putF("OpenGL is enabled, but this game does not support OpenGL (Probably from installing with the same package name from a game that had OpenGL available)", this, this->commonStrings->INIT);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("OpenGL is Off", this, this->commonStrings->INIT);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->isOpenGL() && !features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put("OpenGL is set but not Enabled since statics where not cleared (Reboot or Complete exit is Required)", this, this->commonStrings->INIT);
    

                                    }
                                

                        }
                            
PreLogUtil::put(this->toString(), this, this->commonStrings->INIT);
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLConfiguration::update(Feature* gameFeature, bool colorLocked) -> void{

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

    bool modified = false;;
    

                        if(gameFeature == openGLFeatureFactory->OPENGL)
                        
                                    {
                                    
                        if(features->isFeature(gameFeature))
                        
                                    {
                                    
                        if(!this->isOpenGL())
                        
                                    {
                                    this->setOpenGL(true);
    
modified= true;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(this->isOpenGL())
                        
                                    {
                                    this->setOpenGL(false);
    
modified= true;
    

                                    }
                                

                        }
                            

                                    }
                                

                        if(gameFeature == openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS || gameFeature == openGLFeatureFactory->OPENGL_AS_GAME_THREAD)
                        
                                    {
                                    
                        if(features->isFeature(gameFeature))
                        
                                    {
                                    
                        if(gameFeature != this->getType())
                        
                                    {
                                    this->setType(dynamic_cast<OpenGLFeature*>(gameFeature));
    
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888)
                        
                                    {
                                    
                        if(features->isFeature(gameFeature))
                        
                                    {
                                    
                        if(this->getImageColor() != gameFeature)
                        
                                    {
                                    this->setImageColor(dynamic_cast<OpenGLFeature*>(gameFeature));
    

                        if(colorLocked)
                        
                                    {
                                    
                        if(gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_565)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_565);
    

                                    }
                                
                             else 
                        if(gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888)
                        
                                    {
                                    this->setColor(openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888);
    

                                    }
                                

                                    }
                                
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888)
                        
                                    {
                                    
                        if(features->isFeature(gameFeature))
                        
                                    {
                                    
                        if(this->getColor() != gameFeature)
                        
                                    {
                                    this->setColor(dynamic_cast<OpenGLFeature*>(gameFeature));
    
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory->OPENGL_AUTO_SELECT || gameFeature == openGLFeatureFactory->OPENGL_MINIMUM)
                        
                                    {
                                    
                        if(features->isFeature(gameFeature))
                        
                                    {
                                    this->setVersionSelector(dynamic_cast<OpenGLFeature*>(gameFeature));
    

                                    }
                                
modified= true;
    

                                    }
                                

                        if(modified)
                        
                                    {
                                    this->write();
    

                                    }
                                
}


    auto OpenGLConfiguration::setOpenGL(bool opengl) -> void{
this->opengl= opengl;
    
}


    auto OpenGLConfiguration::isOpenGL() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->opengl;
    
}


    auto OpenGLConfiguration::setImageColor(OpenGLFeature* imageColor) -> void{
this->imageColor= imageColor;
    
}


    auto OpenGLConfiguration::getImageColor() -> OpenGLFeature*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColor;
    
}


    auto OpenGLConfiguration::setColor(OpenGLFeature* color) -> void{
this->color= color;
    
}


    auto OpenGLConfiguration::getColor() -> OpenGLFeature*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    auto OpenGLConfiguration::setVersionSelector(OpenGLFeature* versionSelector) -> void{
this->versionSelector= versionSelector;
    
}


    auto OpenGLConfiguration::getVersionSelector() -> OpenGLFeature*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->versionSelector;
    
}


    auto OpenGLConfiguration::setType(OpenGLFeature* type) -> void{
this->type= type;
    
}


    auto OpenGLConfiguration::getType() -> OpenGLFeature*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    auto OpenGLConfiguration::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append(" isOpenGL: ");
    
stringBuffer->appendboolean(this->isOpenGL());
    
stringBuffer->append(" VersionSelector: ");
    
stringBuffer->append(stringUtil->toString(this->getVersionSelector()));
    
stringBuffer->append(" Type: ");
    
stringBuffer->append(stringUtil->toString(this->getType()));
    
stringBuffer->append(" Image Color: ");
    
stringBuffer->append(stringUtil->toString(this->getImageColor()));
    
stringBuffer->append(" Color: ");
    
stringBuffer->append(stringUtil->toString(this->getColor()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_CPP
