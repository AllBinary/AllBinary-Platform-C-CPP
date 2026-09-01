
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameAdStateFactoryInterface.h"
#include "AppNameLicensingAdConfiguration.h"
#include "GameAdStateBase.h"

class GameAdStateFactory
            : public Object
        : public GameAdStateFactoryInterface {

    private: static GameAdStateFactory instance() { return GameAdStateFactory(); }

    public: static GameAdStateFactory getInstance();

    private: const std::vector<GameAdState> gameAdStateArray = 
                                                        {
                                                            GameAdState(AppNameLicensingAdConfiguration())
                                                        };

    private: GameAdState gameAdState = this->gameAdStateArray[0];

    public: GameAdState getCurrentInstance();

                //@Throws(Exception.constructor)
            
    public: GameAdStateBase getInstanceForApp(SoftwareInformation softwareInformation);

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
