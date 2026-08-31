
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sound.h"
#include "NoSound.h"

class PlayerQueue
            : public Object
         {
        

    private: static const TOTAL: string = "Sounds In Queue: ";

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const list: BasicArrayList = new BasicArrayListD();

    private: max: int32_t;

 constructor (int32_t max){

            super();
        this.max= max;
    
}


    public add(Sound sound){

        try {
            
                        if(!this.list.contains(sound))
                        
                                    {
                                    this.list.add(sound);
    

                                    }
                                

                //: 
} catch(e) 
            {
PreLogUtil.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD);
    
}

}


    public bool process(){

    sound: Sound = NoSound.getInstance()!;;
    

        try {
            
    played: bool = false;;
    

                        if(this.list.size() > 0)
                        
                                    {
                                    sound= this.list.removeAt(0) as Sound;
    

                        if(sound != 
                                    null
                                )
                        
                                    {
                                    sound.getPlayerP()!.start();
    

                                    }
                                

        while(this.list.size() > this.max)
        {
this.list.removeAt(0);
    
}

played= true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return played;
    

                //: 
} catch(e) 
            {

    resource: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(sound != 
                                    null
                                )
                        
                                    {
                                    resource= sound.getResource();
    

                                    }
                                
PreLogUtil.put(new StringMaker().append(this.commonStrings!.EXCEPTION_LABEL)!.append(resource)!.toString(), this, this.commonStrings!.PROCESS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public clear(){
this.list.clear();
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(PlayerQueue.TOTAL)!.appendint(this.list.size())!.toString();;
    
}


};

            

