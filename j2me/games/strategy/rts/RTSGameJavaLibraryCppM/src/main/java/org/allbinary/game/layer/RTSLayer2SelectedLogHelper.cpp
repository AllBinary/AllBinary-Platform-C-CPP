
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayer2LogHelper.h"
#include "PathFindingLayerInterface.h"

class RTSLayer2SelectedLogHelper: public RTSLayer2LogHelper {
        

    private: static const instanceC: RTSLayer2SelectedLogHelper = new RTSLayer2SelectedLogHelper();

    public static RTSLayer2SelectedLogHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer2SelectedLogHelper.instanceC;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const TRACK_TO_FIRE_OR_MOVE: string = "trackTo:fireOrMove";

    private: const BUILDING_CHASE: string = "buildingChase";

    public steeringUp(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Up")!.toString(), this, this.TRACK_TO_FIRE_OR_MOVE);
    
}


    public steeringFireOrStop(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Fire/All Stop")!.toString(), this, this.TRACK_TO_FIRE_OR_MOVE);
    
}


    public buildingAbove(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" Building Above")!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingChaseLeft(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Going Left: ")!.appendint(angle)!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingChaseRight(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Going Right: ")!.appendint(angle)!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingDown(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" Building Below")!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingChaseDown(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Going Down: ")!.appendint(angle)!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingChaseUp(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" steering - Going Up: ")!.appendint(angle)!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingLeft(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" Building Left")!.toString(), this, this.BUILDING_CHASE);
    
}


    public buildingRight(PathFindingLayerInterface pathFindingLayerInterface){
this.logUtil!.putF(new StringMaker().append(pathFindingLayerInterface!.getName())!.append(" Building Right")!.toString(), this, this.BUILDING_CHASE);
    
}


};

            

