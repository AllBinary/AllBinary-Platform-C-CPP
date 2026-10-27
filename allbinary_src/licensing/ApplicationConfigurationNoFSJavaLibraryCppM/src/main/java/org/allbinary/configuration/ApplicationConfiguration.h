
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
        #define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Feature;
class Features;
class MainFeatureFactory;
class NullUtil;
class LogUtil;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ApplicationConfiguration
            : public virtual Object
         {

    private: static Object* instance;

    public: static ApplicationConfiguration* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: bool fullscreen = true;

    private: bool showTitleBar = false;

    private: bool progressBarView = false;

private: ApplicationConfiguration();

                //@Throws(Exception.constructor)
            
    private: void read();

                //@Throws(Exception.constructor)
            
    public: void write();

                //@Throws(Exception.constructor)
            
    public: void update(Feature* gameFeature);

    public: void setFullscreen(bool fullscreen);

    public: bool isFullscreen();

    public: void setShowTitleBar(bool showTitleBar);

    public: bool isShowTitleBar();

    public: void setProgressBarView(bool progressBarView);

    public: bool isProgressBarView();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Feature.h>)
#include <org/allbinary/game/configuration/feature/Feature.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
