
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonsListBuilder.h"
#include "BasicTouchButtonsBuilder.h"
#include "BuildingScrollTouchButtonsBuilder.h"
#include "UpgradeDowngradeTouchButtonsBuilder.h"

class EndLevelTouchButtonsBuilder: public TouchButtonsListBuilder {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: BasicArrayList getList(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    BasicArrayList list = BasicArrayListD();;
    
list.addAllList(BasicTouchButtonsBuilder().getList());
    
list.addAllList(BuildingScrollTouchButtonsBuilder().getList());
    
list.addAllList(UpgradeDowngradeTouchButtonsBuilder().getList());
    
this->addList(list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    
}

}


};

            

