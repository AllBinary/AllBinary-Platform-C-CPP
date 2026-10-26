
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
        #include "OpenGLFeatureFactory.h"
#include "OpenGLFeature.h"

class OpenGLConfiguration
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static OpenGLConfiguration getInstance(){

                        if(OpenGLConfiguration::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    OpenGLConfiguration::instance= OpenGLConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLConfiguration::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string FILE = "OpenGLConfiguration.dat";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: bool opengl = false;

    private: OpenGLFeature type = OpenGLFeatureFactory::getInstance().OPENGL_AS_GAME_THREAD;

    private: OpenGLFeature imageColor = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature color = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature versionSelector = OpenGLFeatureFactory::getInstance().OPENGL_AUTO_SELECT;

private: OpenGLConfiguration(){

        try {
            
                        if(FileFactory::getInstance().isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void read(){

    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream fileInputStream = fileInputStreamFactory.getFileInputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    

    DataInputStream dataInputStream = DataInputStream(fileInputStream);;
    

    int32_t openGLValue = dataInputStream.readInt();;
    

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
                            

    std::string version = dataInputStream.readUTF();;
    

                        if(this->tsUtil.compareTo(version, openGLFeatureFactory.OPENGL_AUTO_SELECT.getName()) == 0)
                        
                                    {
                                    this->setVersionSelector(openGLFeatureFactory.OPENGL_AUTO_SELECT);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(version, openGLFeatureFactory.OPENGL_MINIMUM.getName()) == 0)
                        
                                    {
                                    this->setVersionSelector(openGLFeatureFactory.OPENGL_MINIMUM);
    

                                    }
                                
                        else {
                            


                            throw Exception("OpenGLConfiguration: Error reading version selector: " +version);
                    

                        }
                            

    std::string type = dataInputStream.readUTF();;
    

                        if(this->tsUtil.compareTo(type, openGLFeatureFactory.OPENGL_AS_GAME_THREAD.getName()) == 0)
                        
                                    {
                                    this->setType(openGLFeatureFactory.OPENGL_AS_GAME_THREAD);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(type, openGLFeatureFactory.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS.getName()) == 0)
                        
                                    {
                                    this->setType(openGLFeatureFactory.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS);
    

                                    }
                                
                        else {
                            


                            throw Exception("OpenGLConfiguration: Error reading image color");
                    

                        }
                            

    std::string imageColor = dataInputStream.readUTF();;
    

                        if(this->tsUtil.compareTo(imageColor, openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444.getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(imageColor, openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444.getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(imageColor, openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444.getName()) == 0)
                        
                                    {
                                    this->setImageColor(openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444);
    

                                    }
                                
                        else {
                            


                            throw Exception("OpenGLConfiguration: Error reading image color: " +imageColor);
                    

                        }
                            

    std::string color = dataInputStream.readUTF();;
    

                        if(this->tsUtil.compareTo(color, openGLFeatureFactory.OPENGL_COLOR_DEPTH_4444.getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(color, openGLFeatureFactory.OPENGL_COLOR_DEPTH_565.getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_565);
    

                                    }
                                
                             else 
                        if(this->tsUtil.compareTo(color, openGLFeatureFactory.OPENGL_COLOR_DEPTH_8888.getName()) == 0)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_8888);
    

                                    }
                                
                        else {
                            


                            throw Exception("OpenGLConfiguration: Error reading color: " +color);
                    

                        }
                            
PreLogUtil::put("Read Configuration: " +this->toString(), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){

    Closeable closeable = NullCloseable::NULL_CLOSEABLE;;
    

        try {
            PreLogUtil::put("Write Configuration: " +this->toString(), this, "write");
    

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream fileOutputStream = fileInputStreamFactory.getFileOutputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    

    AbDataOutputStream dataOutputStream = AbDataOutputStream(fileOutputStream);;
    
closeable= dataOutputStream;
    

                        if(this->isOpenGL())
                        
                                    {
                                    dataOutputStream.writeInt(1);
    

                                    }
                                
                        else {
                            dataOutputStream.writeInt(0);
    

                        }
                            
dataOutputStream.writeUTF(this->getVersionSelector().getName());
    
dataOutputStream.writeUTF(this->getType().getName());
    
dataOutputStream.writeUTF(this->getImageColor().getName());
    
dataOutputStream.writeUTF(this->getColor().getName());
    
dataOutputStream.flush();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            StreamUtil::getInstance().close(closeable);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public: void init(){

    Features features = Features::getInstance();;
    

                        if(ChangedGameFeatureListener::getInstance().isChangedFeature(MainFeatureFactory::getInstance().STATIC))
                        
                                    {
                                    
    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(this->isOpenGL())
                        
                                    {
                                    
                        if(features.isFeature(openGLFeatureFactory.OPENGL_2D) || features.isFeature(openGLFeatureFactory.OPENGL_3D) || features.isFeature(openGLFeatureFactory.OPENGL_2D_AND_3D))
                        
                                    {
                                    
                        if(!features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    this->logUtil.putF("Turning on OpenGL as Default", this, this->commonStrings.INIT);
    
features.addDefault(OpenGLFeatureFactory::getInstance().OPENGL);
    
this->logUtil.putF("Using OpenGL Type Feature: " +this->getType(), this, this->commonStrings.INIT);
    
features.addDefault(this->getType());
    
this->logUtil.putF("Using OpenGL ImageColor Feature: " +this->getImageColor(), this, this->commonStrings.INIT);
    
features.addDefault(this->getImageColor());
    
this->logUtil.putF("Using OpenGL Color Feature: " +this->getColor(), this, this->commonStrings.INIT);
    
features.addDefault(this->getColor());
    
this->logUtil.putF("Using OpenGL Version Selector Feature: " +this->getVersionSelector(), this, this->commonStrings.INIT);
    
features.addDefault(this->getVersionSelector());
    

                                    }
                                

                                    }
                                
                        else {
                            this->logUtil.putF("OpenGL is enabled, but this game does not support OpenGL (Probably from installing with the same package name from a game that had OpenGL available)", this, this->commonStrings.INIT);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil.putF("OpenGL is Off", this, this->commonStrings.INIT);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->isOpenGL() && !features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    PreLogUtil::put("OpenGL is set but not Enabled since statics where not cleared (Reboot or Complete exit is Required)", this, this->commonStrings.INIT);
    

                                    }
                                

                        }
                            
PreLogUtil::put(this->toString(), this, this->commonStrings.INIT);
    
}


                //@Throws(Exception.constructor)
            
    public: void update(Feature gameFeature, bool colorLocked){

    Features features = Features::getInstance();;
    

    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

    bool modified = false;;
    

                        if(gameFeature == openGLFeatureFactory.OPENGL)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
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
                                

                        if(gameFeature == openGLFeatureFactory.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS || gameFeature == openGLFeatureFactory.OPENGL_AS_GAME_THREAD)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
                                    {
                                    
                        if(gameFeature != this->getType())
                        
                                    {
                                    this->setType(gameFeature);
    
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_8888)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
                                    {
                                    
                        if(this->getImageColor() != gameFeature)
                        
                                    {
                                    this->setImageColor(gameFeature);
    

                        if(colorLocked)
                        
                                    {
                                    
                        if(gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_4444)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_4444);
    

                                    }
                                
                             else 
                        if(gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_565)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_565);
    

                                    }
                                
                             else 
                        if(gameFeature == openGLFeatureFactory.IMAGE_COLOR_DEPTH_8888)
                        
                                    {
                                    this->setColor(openGLFeatureFactory.OPENGL_COLOR_DEPTH_8888);
    

                                    }
                                

                                    }
                                
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory.OPENGL_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory.OPENGL_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory.OPENGL_COLOR_DEPTH_8888)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
                                    {
                                    
                        if(this->getColor() != gameFeature)
                        
                                    {
                                    this->setColor(gameFeature);
    
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory.OPENGL_AUTO_SELECT || gameFeature == openGLFeatureFactory.OPENGL_MINIMUM)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
                                    {
                                    this->setVersionSelector(gameFeature);
    

                                    }
                                
modified= true;
    

                                    }
                                

                        if(modified)
                        
                                    {
                                    this->write();
    

                                    }
                                
}


    public: void setOpenGL(bool opengl){
this->opengl= opengl;
    
}


    public: bool isOpenGL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->opengl;
    
}


    public: void setImageColor(OpenGLFeature imageColor){
this->imageColor= imageColor;
    
}


    public: OpenGLFeature getImageColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColor;
    
}


    public: void setColor(OpenGLFeature color){
this->color= color;
    
}


    public: OpenGLFeature getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    public: void setVersionSelector(OpenGLFeature versionSelector){
this->versionSelector= versionSelector;
    
}


    public: OpenGLFeature getVersionSelector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->versionSelector;
    
}


    public: void setType(OpenGLFeature type){
this->type= type;
    
}


    public: OpenGLFeature getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

    StringUtil stringUtil = StringUtil::getInstance();;
    
stringBuffer.append(" isOpenGL: ");
    
stringBuffer.appendboolean(this->isOpenGL());
    
stringBuffer.append(" VersionSelector: ");
    
stringBuffer.append(stringUtil.toString(this->getVersionSelector()));
    
stringBuffer.append(" Type: ");
    
stringBuffer.append(stringUtil.toString(this->getType()));
    
stringBuffer.append(" Image Color: ");
    
stringBuffer.append(stringUtil.toString(this->getImageColor()));
    
stringBuffer.append(" Color: ");
    
stringBuffer.append(stringUtil.toString(this->getColor()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

