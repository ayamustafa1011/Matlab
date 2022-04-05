classdef ErrorStatus < Simulink.IntEnumType
    enumeration
        Rcc_enuOK(0)
        Rcc_enuNok(1)
        Rcc_enuNullPointer(2)
    end
    methods(Static)
        function ReturnValue = getDefaultValue()
            ReturnValue = ErrorStatus.Rcc_enuOK;
        end
    end
end