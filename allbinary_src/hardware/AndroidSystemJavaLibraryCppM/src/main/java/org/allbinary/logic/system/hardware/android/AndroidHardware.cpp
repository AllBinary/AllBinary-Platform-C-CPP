
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
        



            #include <hilog/log.h>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/android/UnknownHardware.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidHardware
            : public Object
        : public HardwareInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: componentInterfaceVector: BasicArrayList = new BasicArrayListD();

    private: const PROC_BUS_INPUT_DIRECTORY: string = "/proc/bus/input/";

    private: const DEVICES: string = this.PROC_BUS_INPUT_DIRECTORY +"devices/";

    private: const MINHARDWARE: int32_t = 3;

public constructor (){

            super();
        this.init(this.DEVICES);
    

    size: int32_t = this.componentInterfaceVector!.size()!;;
    

                        if(size < this.MINHARDWARE)
                        
                                    {
                                    


                            throw new Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    init(string filePath){

    lineNumberReader: Closeable = NullCloseable.NULL_CLOSEABLE;;
    

        try {
            lineNumberReader= this.get(filePath);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Hardware Data: " +this.toString(), this, this.commonStrings!.INIT, e);
    



                            throw e;
                    
}

         finally {
            
                        if(lineNumberReader != 
                                    null
                                )
                        
                                    {
                                    lineNumberReader!.close();
    

                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    LineNumberReader get(string filePath){
this.componentInterfaceVector= new BasicArrayListD();
    

    pciFile: FileReader = new FileReader(filePath);;
    

    lineNumberReader: LineNumberReader = new LineNumberReader(pciFile);;
    
this.logUtil!.putF("File Found", this, this.commonStrings!.CONSTRUCTOR);
    

    nextLine: string = lineNumberReader!.readLine()!;;
    

        while(nextLine != 
                                    null
                                )
        {
nextLine= lineNumberReader!.readLine();
    
this.componentInterfaceVector!.add(new UnknownHardware(nextLine));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return lineNumberReader;
    
}


    public HardwareComponentInterface getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentInterfaceVector!.get(index) as HardwareComponentInterface;
    
}


    public string toString(){

    stringBuilder: StringMaker = new StringMaker();;
    

    size: int32_t = this.componentInterfaceVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    componentInterface: HardwareComponentInterface = this.componentInterfaceVector!.get(index) as HardwareComponentInterface;;
    
stringBuilder!.append(componentInterface!.toString());
    
stringBuilder!.append(CommonSeps.getInstance()!.NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuilder!.toString();;
    
}


    public bool compareTo(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public Hashtable<any, any> difference(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


};

            

