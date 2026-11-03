
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto LocalPlayerInputIdFactory::instance_owner() -> LocalPlayerInputIdFactory* { static std::unique_ptr<LocalPlayerInputIdFactory> value(new LocalPlayerInputIdFactory()); return value.get(); }
LocalPlayerInputIdFactory* LocalPlayerInputIdFactory::instance = LocalPlayerInputIdFactory::instance_owner();

LocalPlayerInputIdFactory::LocalPlayerInputIdFactory() : logUtil(LogUtil::getInstance()), deviceIdToplayerId(std::vector<int32_t>(this->MAX_FAST_DEVICEID)), playerIdToDeviceId(std::vector<int32_t>(this->MAX_NUMBER_OF_PLAYERS)), playersInPlay(std::vector<bool>(this->MAX_NUMBER_OF_PLAYERS)){




                        for (
    int32_t index = this->deviceIdToplayerId.size() -1;index >= 0; index--)
        {
this->deviceIdToplayerId[index]=  -1;
    
}

}


    auto LocalPlayerInputIdFactory::getInstance() -> LocalPlayerInputIdFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LocalPlayerInputIdFactory::instance;
    
}


    auto LocalPlayerInputIdFactory::getDeviceId(int32_t playerInputId) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->playerIdToDeviceId[playerInputId];
    
}


    auto LocalPlayerInputIdFactory::getPlayerForDevice(int32_t deviceId) -> int32_t{

    int32_t index= 0;;
    

                        if(deviceId < this->MAX_FAST_DEVICEID)
                        
                                    {
                                    
    int32_t playerInputId = this->deviceIdToplayerId[deviceId];;
    

                        if(playerInputId !=  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return playerInputId;
    

                                    }
                                

                                    }
                                
                        else {
                            



                        for (
    index= this->totalDevicesMapped -1; index >= 0; index--)
        {

                        if(this->playerIdToDeviceId[index] == deviceId)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}


                        }
                            
index= this->totalDevicesMapped;
    

                        if(deviceId < this->MAX_FAST_DEVICEID)
                        
                                    {
                                    this->deviceIdToplayerId[deviceId]= index;
    

                                    }
                                
                        else {
                            this->logUtil->putF((new StringMaker())->append("Added DeviceId: ")->appendint(deviceId)->append(" beyond fast Id list")->toString(), this, "getPlayerForDevice");
    

                        }
                            
this->playerIdToDeviceId[index]= deviceId;
    
AnalogLocationInputFactory::getInstance()->addPlayer(this->totalDevicesMapped);
    
this->totalDevicesMapped++;
    
this->logUtil->putF((new StringMaker())->append("Added DeviceId: ")->appendint(deviceId)->append(" at: ")->appendint(index)->append(" Total: ")->appendint(this->totalDevicesMapped)->toString(), this, "getPlayerForDevice");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    
}


    auto LocalPlayerInputIdFactory::getTotalDevicesInPlay() -> int32_t{

    int32_t total = 0;;
    




                        for (
    int32_t index = this->totalDevicesMapped -1;index >= 0; index--)
        {

                        if(this->playersInPlay[index] == true)
                        
                                    {
                                    total++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return total;
    
}


    auto LocalPlayerInputIdFactory::isPlayerInPlay(int32_t playerInputId) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->playersInPlay[playerInputId];
    
}


    auto LocalPlayerInputIdFactory::setPlayerInPlay(int32_t playerInputId) -> void{
this->logUtil->putF((new StringMaker())->append("Setting PlayerInPlay with playerInputId: ")->appendint(playerInputId)->toString(), this, "setPlayerInPlay");
    
this->playersInPlay[playerInputId]= true;
    
}


    auto LocalPlayerInputIdFactory::setPlayerOutOfPlay(int32_t playerInputId) -> void{
this->logUtil->putF((new StringMaker())->append("Setting PlayerOutOfPlay with playerInputId: ")->appendint(playerInputId)->toString(), this, "setPlayerOutOfPlay");
    
this->playersInPlay[playerInputId]= false;
    
}


    auto LocalPlayerInputIdFactory::getPlayersInPlay() -> std::vector<bool>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->playersInPlay;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_CPP
