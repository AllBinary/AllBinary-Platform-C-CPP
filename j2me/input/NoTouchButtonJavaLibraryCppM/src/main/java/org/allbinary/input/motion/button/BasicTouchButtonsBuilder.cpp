
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"

class BasicTouchButtonsBuilder: public BaseTouchInput {

    private: static const BasicTouchButtonsBuilder SINGLETON = BasicTouchButtonsBuilder();

    public: static BaseTouchInput getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicTouchButtonsBuilder::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: BasicArrayList getList(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.GET_LIST);
    

    BasicArrayList list = BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.GET_LIST, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    
}

}


};

            

