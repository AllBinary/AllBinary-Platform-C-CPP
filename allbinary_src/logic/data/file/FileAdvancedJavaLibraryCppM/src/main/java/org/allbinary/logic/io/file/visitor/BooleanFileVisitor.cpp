
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFileVisitor
            : public Object
        : public VisitorInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: filterStringBasicArrayList: BasicArrayList;

public constructor (BasicArrayList filterStringBasicArrayList){

            super();
        this.setFilterStringBasicArrayList(filterStringBasicArrayList);
    
PreLogUtil.put("Filter BasicArrayList: " +this.getFilterStringBasicArrayList()!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
}


    public any visit(any = {} anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.visit(anyType as AbFile);
    
}


    public Boolean visit(AbFile file){

    list: BasicArrayList = this.getFilterStringBasicArrayList()!;;
    

    size: int32_t = list.size()!;;
    

    nextFileFilterString: string;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextFileFilterString= list.get(index) as string;
    

                        if(this.visit(file, nextFileFilterString).valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}


    public BasicArrayList getFilterStringBasicArrayList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.filterStringBasicArrayList;
    
}


    public setFilterStringBasicArrayList(BasicArrayList filterStringBasicArrayList){
this.filterStringBasicArrayList= filterStringBasicArrayList;
    
}


    public Boolean visit(AbFile file, string fileNameString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}


};

            

