
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/GameAdStateFactory.h"
        

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


GameAdStateFactory::GameAdStateFactory() : gameAdStateArray(
                                                        {
                                                            new GameAdState(new AppNameLicensingAdConfiguration())
                                                        }), gameAdState(this->gameAdStateArray[0]) {
        }
        auto GameAdStateFactory::instance_owner() -> GameAdStateFactory* { static std::unique_ptr<GameAdStateFactory> value(new GameAdStateFactory()); return value.get(); }
GameAdStateFactory* GameAdStateFactory::instance = GameAdStateFactory::instance_owner();

    auto GameAdStateFactory::getInstance() -> GameAdStateFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameAdStateFactory::instance;
    
}


    auto GameAdStateFactory::getCurrentInstance() -> GameAdState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameAdState;
    
}


                //@Throws(Exception.constructor)
            
    auto GameAdStateFactory::getInstanceForApp(SoftwareInformation* softwareInformation) -> GameAdStateBase*{
this->gameAdState= this->gameAdStateArray[0];
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameAdStateArray[0];
    
}


    auto GameAdStateFactory::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_CPP
