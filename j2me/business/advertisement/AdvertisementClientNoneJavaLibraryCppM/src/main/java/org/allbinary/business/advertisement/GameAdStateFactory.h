
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"
#include "org/allbinary/business/advertisement/AppNameLicensingAdConfiguration.h"
#include "org/allbinary/business/advertisement/GameAdStateBase.h"

class GameAdStateFactory
            : public Object
        , public GameAdStateFactoryInterface {

    private: static GameAdStateFactory* instance() { static std::unique_ptr<GameAdStateFactory> value(new GameAdStateFactory()); return value.get(); }

    public: static GameAdStateFactory* getInstance();

    private: const std::vector<GameAdState*> gameAdStateArray = 
                                                        {
                                                            new GameAdState(new AppNameLicensingAdConfiguration())
                                                        };

    private: GameAdState* gameAdState = this->gameAdStateArray[0];

    public: GameAdState* getCurrentInstance();

                //@Throws(Exception.constructor)
            
    public: GameAdStateBase* getInstanceForApp(SoftwareInformation* softwareInformation);

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
