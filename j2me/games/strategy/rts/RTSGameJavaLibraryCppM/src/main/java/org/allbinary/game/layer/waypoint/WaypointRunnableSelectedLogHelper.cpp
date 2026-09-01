
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
        



#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointRunnableLogHelper.h"

class WaypointRunnableSelectedLogHelper: public WaypointRunnableLogHelper {

    private: static const WaypointRunnableSelectedLogHelper instanceC = WaypointRunnableSelectedLogHelper();

    public: static WaypointRunnableSelectedLogHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointRunnableSelectedLogHelper::instanceC;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: void start(PathFindingLayerInterface pathFindingLayerInterface){
this->logUtil.putF(StringMaker().append(pathFindingLayerInterface.getName()).append(this->commonStrings.START_RUNNABLE).toString(), this, this->commonStrings.RUN);
    
}


    public: void end(PathFindingLayerInterface pathFindingLayerInterface){
this->logUtil.putF(StringMaker().append(pathFindingLayerInterface.getName()).append(this->commonStrings.END_RUNNABLE).toString(), this, this->commonStrings.RUN);
    
}


};

            

