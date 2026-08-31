
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LocalPlayerInputIdFactory
            : public Object
         {
        

    private: static const instance: LocalPlayerInputIdFactory = new LocalPlayerInputIdFactory();

    public static LocalPlayerInputIdFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LocalPlayerInputIdFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const MAX_NUMBER_OF_PLAYERS: int32_t = 6;

    private: const MAX_FAST_DEVICEID: int32_t = 65;

    private: const deviceIdToplayerId: std::vector<int32_t> = new Array(this.MAX_FAST_DEVICEID);

    private: const playerIdToDeviceId: std::vector<int32_t> = new Array(this.MAX_NUMBER_OF_PLAYERS);

    private: const playersInPlay: std::vector<bool> = new Array(this.MAX_NUMBER_OF_PLAYERS);

    private: totalDevicesMapped: int32_t = 0;

private constructor (){

            super();
        



                        for (
    index: int32_t = this.deviceIdToplayerId!.length -1;index >= 0; index--)
        {
this.deviceIdToplayerId[index]=  -1;
    
}

}


    public int32_t getDeviceId(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerIdToDeviceId[playerInputId]!;
    
}


    public int32_t getPlayerForDevice(int32_t deviceId){

    index: int32_t= 0;;
    

                        if(deviceId < this.MAX_FAST_DEVICEID)
                        
                                    {
                                    
    playerInputId: int32_t = this.deviceIdToplayerId[deviceId]!;;
    

                        if(playerInputId !=  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return playerInputId;
    

                                    }
                                

                                    }
                                
                        else {
                            



                        for (
    index= this.totalDevicesMapped -1; index >= 0; index--)
        {

                        if(this.playerIdToDeviceId[index] == deviceId)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}


                        }
                            
index= this.totalDevicesMapped;
    

                        if(deviceId < this.MAX_FAST_DEVICEID)
                        
                                    {
                                    this.deviceIdToplayerId[deviceId]= index;
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append("Added DeviceId: ")!.appendint(deviceId)!.append(" beyond fast Id list")!.toString(), this, "getPlayerForDevice");
    

                        }
                            
this.playerIdToDeviceId[index]= deviceId;
    
AnalogLocationInputFactory.getInstance()!.addPlayer(this.totalDevicesMapped);
    
this.totalDevicesMapped++;
    
this.logUtil!.putF(new StringMaker().append("Added DeviceId: ")!.appendint(deviceId)!.append(" at: ")!.appendint(index)!.append(" Total: ")!.appendint(this.totalDevicesMapped)!.toString(), this, "getPlayerForDevice");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    
}


    public int32_t getTotalDevicesInPlay(){

    total: int32_t = 0;;
    




                        for (
    index: int32_t = this.totalDevicesMapped -1;index >= 0; index--)
        {

                        if(this.playersInPlay[index] == true)
                        
                                    {
                                    total++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    
}


    public bool isPlayerInPlay(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playersInPlay[playerInputId]!;
    
}


    public setPlayerInPlay(int32_t playerInputId){
this.logUtil!.putF(new StringMaker().append("Setting PlayerInPlay with playerInputId: ")!.appendint(playerInputId)!.toString(), this, "setPlayerInPlay");
    
this.playersInPlay[playerInputId]= true;
    
}


    public setPlayerOutOfPlay(int32_t playerInputId){
this.logUtil!.putF(new StringMaker().append("Setting PlayerOutOfPlay with playerInputId: ")!.appendint(playerInputId)!.toString(), this, "setPlayerOutOfPlay");
    
this.playersInPlay[playerInputId]= false;
    
}


    public std::vector<bool> getPlayersInPlay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playersInPlay;
    
}


};

            

