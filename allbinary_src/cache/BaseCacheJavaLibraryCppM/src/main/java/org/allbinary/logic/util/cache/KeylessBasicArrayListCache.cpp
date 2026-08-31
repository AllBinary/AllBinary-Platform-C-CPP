
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedBasicArrayListCache.h"

class KeylessBasicArrayListCache: public IndexedBasicArrayListCache {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

public constructor (){

            super();
        }


    public BasicArrayList get(){

        try {
            
                        if(this.index >= this.list.size())
                        
                                    {
                                    this.addDefault();
    

                                    }
                                

    list: BasicArrayList = this.getAt(this.index++) as BasicArrayList;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.GET, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    
}

}


    public clear(){
super.clear();
    

    basicArrayList: BasicArrayList;;
    




                        for (
    index: int32_t = this.list.size() -1;index >= 0; index--)
        {
basicArrayList= (this.list.objectArray[index]! as BasicArrayList);
    
basicArrayList!.clear();
    
}

}


    public string log(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("S: ");
    
stringBuffer!.appendint(this.list.size());
    

    S_LABEL: string = " s: ";;
    

    basicArrayList: BasicArrayList;;
    




                        for (
    index: int32_t = this.list.size() -1;index >= 0; index--)
        {
stringBuffer!.append(S_LABEL);
    
basicArrayList= (this.list.objectArray[index]! as BasicArrayList);
    
stringBuffer!.appendint(basicArrayList!.size());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

