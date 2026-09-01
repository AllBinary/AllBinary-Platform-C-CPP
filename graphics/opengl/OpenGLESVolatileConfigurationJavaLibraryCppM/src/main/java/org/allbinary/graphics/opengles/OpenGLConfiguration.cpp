
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
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
                        return OpenGLConfiguration::instance() as OpenGLConfiguration;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool opengl = false;

    private: OpenGLFeature type = OpenGLFeatureFactory::getInstance().OPENGL_AS_GAME_THREAD;

    private: OpenGLFeature imageColor = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature color = OpenGLFeatureFactory::getInstance().IMAGE_COLOR_DEPTH_4444;

    private: OpenGLFeature versionSelector = OpenGLFeatureFactory::getInstance().OPENGL_AUTO_SELECT;

private: OpenGLConfiguration(){
}


    public: void write(){
}


                //@Throws(Exception.constructor)
            
    public: void init(){

    Features features = Features::getInstance();;
    

                        if(ChangedGameFeatureListener::getInstance().isChangedFeature(MainFeatureFactory::getInstance().STATIC))
                        
                                    {
                                    
                        if(this->isOpenGL())
                        
                                    {
                                    
                        if(!features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    this->logUtil.putF("Turning on OpenGL", this, this->commonStrings.INIT);
    
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
                            this->logUtil.putF("OpenGL is Off", this, this->commonStrings.INIT);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->isOpenGL() && !features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    PreLogUtil::put("OpenGL is set but not Enabled since Statics where not cleared (Reboot or Complete exit is Required)", this, this->commonStrings.INIT);
    

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
                                    this->setType(gameFeature as OpenGLFeature);
    
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
                                    this->setImageColor(gameFeature as OpenGLFeature);
    

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
                                    this->setColor(gameFeature as OpenGLFeature);
    
modified= true;
    

                                    }
                                

                                    }
                                

                                    }
                                

                        if(gameFeature == openGLFeatureFactory.OPENGL_AUTO_SELECT || gameFeature == openGLFeatureFactory.OPENGL_MINIMUM)
                        
                                    {
                                    
                        if(features.isFeature(gameFeature))
                        
                                    {
                                    this->setVersionSelector(gameFeature as OpenGLFeature);
    

                                    }
                                
modified= true;
    

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

            

