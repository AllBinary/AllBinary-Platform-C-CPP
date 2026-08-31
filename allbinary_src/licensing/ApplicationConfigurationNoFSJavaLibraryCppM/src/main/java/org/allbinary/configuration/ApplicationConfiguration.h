
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
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ApplicationConfiguration getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: fullscreen: bool = true;

    private: showTitleBar: bool = false;

    private: progressBarView: bool = false;

private constructor ();

                //@Throws(Exception.constructor)
            
    read();

                //@Throws(Exception.constructor)
            
    public write();

                //@Throws(Exception.constructor)
            
    public update(Feature gameFeature);

    public setFullscreen(bool fullscreen);

    public bool isFullscreen();

    public setShowTitleBar(bool showTitleBar);

    public bool isShowTitleBar();

    public setProgressBarView(bool progressBarView);

    public bool isProgressBarView();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
