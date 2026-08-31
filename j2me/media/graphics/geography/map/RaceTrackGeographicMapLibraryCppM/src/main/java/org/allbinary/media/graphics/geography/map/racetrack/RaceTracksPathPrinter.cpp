
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTracksPathPrinter
            : public Object
         {
        

    printPath(BasicArrayList list){

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = list.get(index)!;;
    
PreLogUtil.put(new StringMaker().append("pathList.add(cellPositionFactory.getInstance")!.append(anyType!.toString())!.append(");")!.toString(), this, "printPath");
    
}

}


    printPaths(BasicArrayList list){

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
console.log(new StringMaker().append(" Path ")!.appendint(index)!.append(CommonLabels.getInstance()!.COLON_SEP)!.toString());
    
this.printPath(list.get(index) as BasicArrayList);
    
}

}


};

            

