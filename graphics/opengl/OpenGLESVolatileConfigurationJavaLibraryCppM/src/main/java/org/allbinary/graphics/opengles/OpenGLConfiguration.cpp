
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


OpenGLConfiguration::OpenGLConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), type(OpenGLFeatureFactory::getInstance()->OPENGL_AS_GAME_THREAD), imageColor(OpenGLFeatureFactory::getInstance()->IMAGE_COLOR_DEPTH_4444), color(OpenGLFeatureFactory::getInstance()->IMAGE_COLOR_DEPTH_4444), versionSelector(OpenGLFeatureFactory::getInstance()->OPENGL_AUTO_SELECT){
}


    auto OpenGLConfiguration::write() -> void{
}


                //@Throws(Exception.constructor)
            
    auto OpenGLConfiguration::init() -> void{

    Features* features = Features::getInstance();;
    

                        if(ChangedGameFeatureListener::getInstance()->isChangedFeature(MainFeatureFactory::getInstance()->STATIC))
                        
                                    {
                                    
                        if(this->isOpenGL())
                        
                                    {
                                    
                        if(!features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    this->logUtil->putF("Turning on OpenGL", this, this->commonStrings->INIT);
    
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
                            this->logUtil->putF("OpenGL is Off", this, this->commonStrings->INIT);
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->isOpenGL() && !features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put("OpenGL is set but not Enabled since Statics where not cleared (Reboot or Complete exit is Required)", this, this->commonStrings->INIT);
    

                                    }
                                

                        }
                            
PreLogUtil::put(JavaString::valueOf(this), this, this->commonStrings->INIT);
    
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
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCONFIGURATION_CPP
