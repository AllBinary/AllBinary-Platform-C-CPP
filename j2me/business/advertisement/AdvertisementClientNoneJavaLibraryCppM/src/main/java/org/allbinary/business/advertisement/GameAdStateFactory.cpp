
        /* Generated Code Do Not Modify */
        



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
        

    private: static const instance: GameAdStateFactory = new GameAdStateFactory();

    public static GameAdStateFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameAdStateFactory.instance;
    
}


    private: const gameAdStateArray: std::vector<GameAdState> = 
                                                        [
                                                            new GameAdState(new AppNameLicensingAdConfiguration())
                                                        ];

    private: gameAdState: GameAdState = this.gameAdStateArray[0]!;

    public GameAdState getCurrentInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameAdState;
    
}


                //@Throws(Exception.constructor)
            
    public GameAdStateBase getInstanceForApp(SoftwareInformation softwareInformation){
this.gameAdState= this.gameAdStateArray[0]!;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameAdStateArray[0]!;
    
}


    public bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

