
        /* Generated Code Do Not Modify */
        



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

    public: static GameAdStateFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameAdStateFactory::instance();
    
}


    private: const std::vector<GameAdState*> gameAdStateArray = 
                                                        {
                                                            new GameAdState(new AppNameLicensingAdConfiguration())
                                                        };

    private: GameAdState* gameAdState = this->gameAdStateArray[0];

    public: GameAdState* getCurrentInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameAdState;
    
}


                //@Throws(Exception.constructor)
            
    public: GameAdStateBase* getInstanceForApp(SoftwareInformation* softwareInformation){
this->gameAdState= this->gameAdStateArray[0];
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameAdStateArray[0];
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

