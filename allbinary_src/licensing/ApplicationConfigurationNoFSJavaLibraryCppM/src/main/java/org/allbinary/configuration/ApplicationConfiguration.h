
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
        #define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
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

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static ApplicationConfiguration getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool fullscreen = true;

    private: bool showTitleBar = false;

    private: bool progressBarView = false;

private: ApplicationConfiguration();

                //@Throws(Exception.constructor)
            
    private: void read();

                //@Throws(Exception.constructor)
            
    public: void write();

                //@Throws(Exception.constructor)
            
    public: void update(Feature gameFeature);

    public: void setFullscreen(bool fullscreen);

    public: bool isFullscreen();

    public: void setShowTitleBar(bool showTitleBar);

    public: bool isShowTitleBar();

    public: void setProgressBarView(bool progressBarView);

    public: bool isProgressBarView();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
