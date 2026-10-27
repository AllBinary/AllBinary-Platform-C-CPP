
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameAdState;
class SoftwareInformation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"
class AppNameLicensingAdConfiguration;
class GameAdStateBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameAdStateFactory
            : public virtual Object
        , public GameAdStateFactoryInterface {

    private: static GameAdStateFactory* instance_owner();
    private: static GameAdStateFactory* instance;

    public: static GameAdStateFactory* getInstance();


            
    public: GameAdStateFactory();
        
    private: std::vector<GameAdState*> gameAdStateArray;

    private: GameAdState* gameAdState;

    public: GameAdState* getCurrentInstance();

                //@Throws(Exception.constructor)
            
    public: GameAdStateBase* getInstanceForApp(SoftwareInformation* softwareInformation);

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/logic/system/SoftwareInformation.h>)
#include <org/allbinary/logic/system/SoftwareInformation.h>
#endif
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactoryInterface.h")
#include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/advertisement/AppNameLicensingAdConfiguration.h")
#include "org/allbinary/business/advertisement/AppNameLicensingAdConfiguration.h"
#endif
#if __has_include("org/allbinary/business/advertisement/GameAdStateBase.h")
#include "org/allbinary/business/advertisement/GameAdStateBase.h"
#endif

        #endif
    
