function varargout = session2Task1Calc(varargin)
% SESSION2TASK1CALC MATLAB code for session2Task1Calc.fig
%      SESSION2TASK1CALC, by itself, creates a new SESSION2TASK1CALC or raises the existing
%      singleton*.
%
%      H = SESSION2TASK1CALC returns the handle to a new SESSION2TASK1CALC or the handle to
%      the existing singleton*.
%
%      SESSION2TASK1CALC('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SESSION2TASK1CALC.M with the given input arguments.
%
%      SESSION2TASK1CALC('Property','Value',...) creates a new SESSION2TASK1CALC or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before session2Task1Calc_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to session2Task1Calc_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE'display Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help session2Task1Calc

% Last Modified by GUIDE v2.5 05-Jan-2022 21:31:32

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @session2Task1Calc_OpeningFcn, ...
                   'gui_OutputFcn',  @session2Task1Calc_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before session2Task1Calc is made visible.
function session2Task1Calc_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to session2Task1Calc (see VARARGIN)

% Choose default command line output for session2Task1Calc
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes session2Task1Calc wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = session2Task1Calc_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in n7.
function n7_Callback(hObject, eventdata, handles)
% hObject    handle to n7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'7'));

% --- Executes on button press in n8.
function n8_Callback(hObject, eventdata, handles)
% hObject    handle to n8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'8'));

% --- Executes on button press in n5.
function n5_Callback(hObject, eventdata, handles)
% hObject    handle to n5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'5'));

% --- Executes on button press in n3.
function n3_Callback(hObject, eventdata, handles)
% hObject    handle to n3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'3'));

% --- Executes on button press in n9.
function n9_Callback(hObject, eventdata, handles)
% hObject    handle to n9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'9'));


% --- Executes on button press in n2.
function n2_Callback(hObject, eventdata, handles)
% hObject    handle to n2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'2'));

% --- Executes on button press in n6.
function n6_Callback(hObject, eventdata, handles)
% hObject    handle to n6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'6'));

% --- Executes on button press in n1.
function n1_Callback(hObject, eventdata, handles)
% hObject    handle to n1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'1'));

% --- Executes on button press in n4.
function n4_Callback(hObject, eventdata, handles)
% hObject    handle to n4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'4'));

% --- Executes on button press in n0.
function n0_Callback(hObject, eventdata, handles)
% hObject    handle to n0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s = get(handles.display,'string');
set(handles.display,'string',strcat(s,'0'));

% --- Executes on button press in ndot.
function ndot_Callback(hObject, eventdata, handles)
% hObject    handle to ndot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
if not(strcmp(get(handles.display,'string'),''))
    s = get(handles.display,'string');
    set(handles.display,'string',strcat(s,'.'));
end
% --- Executes on button press in ndiv.
function ndiv_Callback(hObject, eventdata, handles)
% hObject    handle to ndiv (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global A Selector 
A = str2num(get(handles.display,'string'));
Selector = 1;
set(handles.display,'string','');

% --- Executes on button press in nmul.
function nmul_Callback(hObject, eventdata, handles)
% hObject    handle to nmul (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global B Selector 
B = str2num(get(handles.display,'string'));
Selector = 2;
set(handles.display,'string','');


% --- Executes on button press in nminus.
function nminus_Callback(hObject, eventdata, handles)
% hObject    handle to nminus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global C Selector 
if strcmp(get(handles.display,'string'),'')
    set(handles.display,'string','-');
else    
C = str2num(get(handles.display,'string'));
Selector = 3;
set(handles.display,'string','');
end

% --- Executes on button press in nplus.
function nplus_Callback(hObject,  eventdata, handles)
% hObject    handle to nplus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global D Selector 
D = str2num(get(handles.display,'string'));
Selector = 4;
set(handles.display,'string','');

% --- Executes on button press in nmod.
function nmod_Callback(hObject, eventdata, handles)
% hObject    handle to nmod (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

%set(handles.display,'string',num2str(mod(str2num(get(handles.display,'string')))));
global E Selector 
E = str2num(get(handles.display,'string'));
Selector = 5;
set(handles.display,'string','');


% --- Executes on button press in nequal.
function nequal_Callback(hObject, eventdata, handles)
% hObject    handle to nequal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


global A B C D E Selector
 
switch Selector
    case 1
        A = A/str2num(get(handles.display,'string'));
        set(handles.display,'string',num2str(A));
        
    case 2
        B = B*str2num(get(handles.display,'string'));
        set(handles.display,'string',num2str(B));
        
    case 3
        C = C-str2num(get(handles.display,'string'));
        set(handles.display,'string',num2str(C));
        
    case 4
        D = D+str2num(get(handles.display,'string'));
        set(handles.display,'string',num2str(D));
        
    case 5
        E =  mod (str2num(get(handles.display,'string')),str2num(get(handles.display,'string')));
        set(handles.display,'string',num2str(E));     
end


% --- Executes on button press in nclear.
function nclear_Callback(hObject, eventdata, handles)
% hObject    handle to nclear (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

set(handles.display,'string','');

% --- Executes on button press in nsquare.
function nsquare_Callback(hObject, eventdata, handles)
% hObject    handle to nsquare (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

set(handles.display,'string',num2str(str2num(get(handles.display,'string'))^2));

% --- Executes on button press in nroot.
function nroot_Callback(hObject, eventdata, handles)
% hObject    handle to nroot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

set(handles.display,'string',num2str(sqrt(abs(str2num(get(handles.display,'string'))))));


% --- Executes on selection change in ListBoxshape1.
function ListBoxshape1_Callback(hObject, eventdata, handles)
% hObject    handle to ListBoxshape1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns ListBoxshape1 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from ListBoxshape1


m=get(handles.ListBoxshape1,'value');

if(m==1)
    
    set(handles.opdisplay1,'string','+');


    
elseif(m==2)
    set(handles.opdisplay1,'string','-');

  
elseif(m==3)

    set(handles.opdisplay1,'string','*');
    


elseif(m==4)
    set(handles.opdisplay1,'string','/');
    
end


% --- Executes during object creation, after setting all properties.
function ListBoxshape1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ListBoxshape1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listboxshape1 controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in listEqualButton.
function listEqualButton_Callback(hObject, eventdata, handles)
% hObject    handle to listEqualButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

Param1 = get(handles.num1 , 'string');
Param2 =get(handles.num2,'string');
if((Param1 >= '0' && Param1 <= '9') && (Param2 >= '0' && Param2 <= '9'))
    if (Param2 == '0'&&  get(handles.opdisplay1 , 'string')=='/')
        set(handles.result1,'string','cannot divide by zero');
    else
    
 m=strcat(Param1 ,get(handles.opdisplay1, 'string'));
 m=strcat(m,Param2);
  
  disp(m);

 
  set(handles.result1,'string',string(str2sym(m)));
    end
else 
  set(handles.result1,'string','character is invalid');    
end


% --- Executes on selection change in ListBoxshape2.
function ListBoxshape2_Callback(hObject, eventdata, handles)
% hObject    handle to ListBoxshape2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns ListBoxshape2 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from ListBoxshape2


m=get(handles.ListBoxshape2,'value');

if(m==1)
    
    set(handles.opdisplay2,'string','+');


    
elseif(m==2)
    set(handles.opdisplay2,'string','-');

  
elseif(m==3)

    set(handles.opdisplay2,'string','*');
    


elseif(m==4)
    set(handles.opdisplay2,'string','/');
    
end


% --- Executes during object creation, after setting all properties.
function ListBoxshape2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ListBoxshape2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listboxshape1 controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in equalshape2.
function equalshape2_Callback(hObject, eventdata, handles)
% hObject    handle to equalshape2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

val = get(handles.ListBoxshape2,'value')
x = get(handles.xmatrix,'string')
y = get(handles.ymatrix,'string')
x = str2num(x)
y = str2num(y)
switch(val)
    case 1
        z = x+y

    case 2
        z = x-y
        
    case 3
        z = x*y
        
    case 4
        z = x/y
end
set(handles.result2,'string',z)


% --- Executes on button press in radiobutton1.
function radiobutton1_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton1


% --- Executes on button press in delete.
function delete_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in enter.
function enter_Callback(hObject, eventdata, handles)
% hObject    handle to enter (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

e = get(handles.dispequation,'string');
x = 0:0.1:10;
axes = (handles.axes2);
plot(eval(e));      

function num1_Callback(hObject, eventdata, handles)
% hObject    handle to num1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of num1 as text
%        str2double(get(hObject,'String')) returns contents of num1 as a double


% --- Executes during object creation, after setting all properties.
function num1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to num1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function num2_Callback(hObject, eventdata, handles)
% hObject    handle to num2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of num2 as text
%        str2double(get(hObject,'String')) returns contents of num2 as a double


% --- Executes during object creation, after setting all properties.
function num2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to num2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function dispequation_Callback(hObject, eventdata, handles)
% hObject    handle to dispequation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of dispequation as text
%        str2double(get(hObject,'String')) returns contents of dispequation as a double


% --- Executes during object creation, after setting all properties.
function dispequation_CreateFcn(hObject, eventdata, handles)
% hObject    handle to dispequation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function ymatrix_Callback(hObject, eventdata, handles)
% hObject    handle to ymatrix (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ymatrix as text
%        str2double(get(hObject,'String')) returns contents of ymatrix as a double


% --- Executes during object creation, after setting all properties.
function ymatrix_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ymatrix (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function xmatrix_Callback(hObject, eventdata, handles)
% hObject    handle to xmatrix (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of xmatrix as text
%        str2double(get(hObject,'String')) returns contents of xmatrix as a double


% --- Executes during object creation, after setting all properties.
function xmatrix_CreateFcn(hObject, eventdata, handles)
% hObject    handle to xmatrix (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
