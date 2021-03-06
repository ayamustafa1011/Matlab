function varargout = session2Task2Image(varargin)
% SESSION2TASK2IMAGE MATLAB code for session2Task2Image.fig
%      SESSION2TASK2IMAGE, by itself, creates a new SESSION2TASK2IMAGE or raises the existing
%      singleton*.
%
%      H = SESSION2TASK2IMAGE returns the handle to a new SESSION2TASK2IMAGE or the handle to
%      the existing singleton*.
%
%      SESSION2TASK2IMAGE('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SESSION2TASK2IMAGE.M with the given input arguments.
%
%      SESSION2TASK2IMAGE('Property','Value',...) creates a new SESSION2TASK2IMAGE or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before session2Task2Image_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to session2Task2Image_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help session2Task2Image

% Last Modified by GUIDE v2.5 16-Jan-2022 19:37:01

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @session2Task2Image_OpeningFcn, ...
                   'gui_OutputFcn',  @session2Task2Image_OutputFcn, ...
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


% --- Executes just before session2Task2Image is made visible.
function session2Task2Image_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to session2Task2Image (see VARARGIN)

% Choose default command line output for session2Task2Image
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes session2Task2Image wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = session2Task2Image_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double


% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in getimage.
function getimage_Callback(hObject, eventdata, handles)
% hObject    handle to getimage (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

%num = get(handles.edit1 , 'value');
num=str2double(get(handles.edit1 , 'string'));
if num < '60'
    img = imread('happyPNG.PNG');
    axes(handles.axes1);
    imshow(img);
    %imshow('images/happy.PNG','parent',handles.axes1);
elseif num > '60'
    img = imread('sad.PNG');
    axes(handles.axes1);
    imshow(img);
    %imshow('images/sad.PNG','parent',handles.axes1);
end


% --- Executes on mouse press over axes background.
function axes1_ButtonDownFcn(hObject, eventdata, handles)
% hObject    handle to axes1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
