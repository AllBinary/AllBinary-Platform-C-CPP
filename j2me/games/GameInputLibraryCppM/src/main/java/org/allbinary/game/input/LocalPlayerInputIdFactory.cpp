
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
        



            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LocalPlayerInputIdFactory
            : public Object
         {

    private: static LocalPlayerInputIdFactory instance() { return LocalPlayerInputIdFactory(); }

    public: static LocalPlayerInputIdFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LocalPlayerInputIdFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const int32_t MAX_NUMBER_OF_PLAYERS = 6;

    private: const int32_t MAX_FAST_DEVICEID = 65;

    private: const std::vector<int32_t> deviceIdToplayerId = new Array(this->MAX_FAST_DEVICEID);

    private: const std::vector<int32_t> playerIdToDeviceId = new Array(this->MAX_NUMBER_OF_PLAYERS);

    private: const std::vector<bool> playersInPlay = new Array(this->MAX_NUMBER_OF_PLAYERS);

    private: int32_t totalDevicesMapped = 0;

private: LocalPlayerInputIdFactory(){




                        for (
    int32_t index = this->deviceIdToplayerId.size() -1;index >= 0; index--)
        {
this->deviceIdToplayerId[index]=  -1;
    
}

}


    public: int32_t getDeviceId(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerIdToDeviceId[playerInputId]!;
    
}


    public: int32_t getPlayerForDevice(int32_t deviceId){

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
                            this->logUtil.putF(StringMaker().append("Added DeviceId: ").appendint(deviceId).append(" beyond fast Id list").toString(), this, "getPlayerForDevice");
    

                        }
                            
this->playerIdToDeviceId[index]= deviceId;
    
AnalogLocationInputFactory::getInstance().addPlayer(this->totalDevicesMapped);
    
this->totalDevicesMapped++;
    
this->logUtil.putF(StringMaker().append("Added DeviceId: ").appendint(deviceId).append(" at: ").appendint(index).append(" Total: ").appendint(this->totalDevicesMapped).toString(), this, "getPlayerForDevice");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    
}


    public: int32_t getTotalDevicesInPlay(){

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


    public: bool isPlayerInPlay(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playersInPlay[playerInputId]!;
    
}


    public: void setPlayerInPlay(int32_t playerInputId){
this->logUtil.putF(StringMaker().append("Setting PlayerInPlay with playerInputId: ").appendint(playerInputId).toString(), this, "setPlayerInPlay");
    
this->playersInPlay[playerInputId]= true;
    
}


    public: void setPlayerOutOfPlay(int32_t playerInputId){
this->logUtil.putF(StringMaker().append("Setting PlayerOutOfPlay with playerInputId: ").appendint(playerInputId).toString(), this, "setPlayerOutOfPlay");
    
this->playersInPlay[playerInputId]= false;
    
}


    public: std::vector<bool> getPlayersInPlay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playersInPlay;
    
}


};

            

