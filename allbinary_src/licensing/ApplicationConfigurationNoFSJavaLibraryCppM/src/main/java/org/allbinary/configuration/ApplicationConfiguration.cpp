
        /* Generated Code Do Not Modify */
        



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
        
class ApplicationConfiguration
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static ApplicationConfiguration* getInstance(){

                        if(ApplicationConfiguration::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ApplicationConfiguration::instance= new ApplicationConfiguration();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ApplicationConfiguration*>(ApplicationConfiguration::instance);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: bool fullscreen = true;

    private: bool showTitleBar = false;

    private: bool progressBarView = false;

private: ApplicationConfiguration(){

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
            
    private: void read(){
this->setFullscreen(true);
    
this->setProgressBarView(false);
    
this->setShowTitleBar(false);
    
this->logUtil->putF("Read Configuration: " +this->toString(), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){
}


                //@Throws(Exception.constructor)
            
    public: void update(Feature* gameFeature){

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


    public: void setFullscreen(bool fullscreen){
this->fullscreen= fullscreen;
    
}


    public: bool isFullscreen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fullscreen;
    
}


    public: void setShowTitleBar(bool showTitleBar){
this->showTitleBar= showTitleBar;
    
}


    public: bool isShowTitleBar(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->showTitleBar;
    
}


    public: void setProgressBarView(bool progressBarView){
this->progressBarView= progressBarView;
    
}


    public: bool isProgressBarView(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->progressBarView;
    
}


    public: std::string toString(){

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


};

            

