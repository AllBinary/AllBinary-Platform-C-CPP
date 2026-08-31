
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
        



            #include "../../../java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EnumerationUtil.h"
#include "BasicArrayListS.h"
#include "BasicArrayList.h"

class HashtableUtil
            : public Object
         {
        

    private: static const instance: HashtableUtil = new HashtableUtil();

    public static HashtableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HashtableUtil.instance;
    
}


    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    public putAll(Hashtable<any, any> fromHashtable, Hashtable<any, any> hashtable){

    enumeration: Enumeration<any> = fromHashtable!.keys()!;;
    

    keyCanBeNull: any;;
    

    valueCanBeNull: any;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
keyCanBeNull= this.enumerationUtil!.nextElement(enumeration)!;
    
valueCanBeNull= hashtable.get(keyCanBeNull);
    

                        if(valueCanBeNull == 
                                    null
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            hashtable.put(keyCanBeNull, valueCanBeNull);
    

                        }
                            
}

}


    public std::vector<any> getKeysAsArray(Hashtable<any, any> hashtable){

    objectArray: std::vector<any> = new Array(hashtable.length);;
    

    index: int32_t = 0;;
    

    enumeration: Enumeration<any> = hashtable.keys()!;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
objectArray[index++]= this.enumerationUtil!.nextElement(enumeration)!;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public BasicArrayList getKeysAsList(Hashtable<any, any> hashtable){

    list: BasicArrayList = new BasicArrayListS(hashtable.length);;
    

    enumeration: Enumeration<any> = hashtable.keys()!;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
list.add(this.enumerationUtil!.nextElement(enumeration)!);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

