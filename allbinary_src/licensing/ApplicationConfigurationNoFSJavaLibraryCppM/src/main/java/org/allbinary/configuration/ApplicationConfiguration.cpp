
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP
        #define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/configuration/ApplicationConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* ApplicationConfiguration::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto ApplicationConfiguration::getInstance() -> ApplicationConfiguration*{

                        if(ApplicationConfiguration::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ApplicationConfiguration::instance= new ApplicationConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ApplicationConfiguration*>(ApplicationConfiguration::instance);
    
}


ApplicationConfiguration::ApplicationConfiguration() : logUtil(LogUtil::getInstance()){

        try {
            this->read();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::read() -> void{
this->setFullscreen(true);
    
this->setProgressBarView(false);
    
this->setShowTitleBar(false);
    
this->logUtil->putF(JavaString::valueOf("Read Configuration: ") +JavaString::valueOf(this->toString()), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::write() -> void{
}


                //@Throws(Exception.constructor)
            
    auto ApplicationConfiguration::update(Feature* gameFeature) -> void{

                        if(gameFeature == MainFeatureFactory::getInstance()->FULL_SCREEN)
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    

                        if(features->isFeature(gameFeature))
                        
                                    {
                                    
                        if(!this->isFullscreen())
                        
                                    {
                                    this->setFullscreen(true);
    
this->write();
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(this->isFullscreen())
                        
                                    {
                                    this->setFullscreen(false);
    
this->write();
    

                                    }
                                

                        }
                            

                                    }
                                
}


    auto ApplicationConfiguration::setFullscreen(bool fullscreen) -> void{
this->fullscreen= fullscreen;
    
}


    auto ApplicationConfiguration::isFullscreen() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fullscreen;
    
}


    auto ApplicationConfiguration::setShowTitleBar(bool showTitleBar) -> void{
this->showTitleBar= showTitleBar;
    
}


    auto ApplicationConfiguration::isShowTitleBar() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->showTitleBar;
    
}


    auto ApplicationConfiguration::setProgressBarView(bool progressBarView) -> void{
this->progressBarView= progressBarView;
    
}


    auto ApplicationConfiguration::isProgressBarView() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->progressBarView;
    
}


    auto ApplicationConfiguration::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("isFullscreen: ");
    
stringBuffer->appendboolean(this->isFullscreen());
    
stringBuffer->append(" isProgressBarView: ");
    
stringBuffer->appendboolean(this->isProgressBarView());
    
stringBuffer->append(" isShowTitleBar: ");
    
stringBuffer->appendboolean(this->isShowTitleBar());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_CPP
