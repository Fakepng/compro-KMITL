(function(){'use strict';var m;function aa(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ea="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function fa(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var ia=fa(this);function u(a,b){if(b)a:{var c=ia;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&ea(c,a,{configurable:!0,writable:!0,value:b})}}
u("Symbol",function(a){function b(f){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c(d+(f||"")+"_"+e++,f)}
function c(f,g){this.h=f;ea(this,"description",{configurable:!0,writable:!0,value:g})}
if(a)return a;c.prototype.toString=function(){return this.h};
var d="jscomp_symbol_"+(1E9*Math.random()>>>0)+"_",e=0;return b});
u("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=ia[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ea(d.prototype,a,{configurable:!0,writable:!0,value:function(){return ja(aa(this))}})}return a});
function ja(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function ka(a){return a.raw=a}
function la(a,b){a.raw=b;return a}
function v(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];if(b)return b.call(a);if("number"==typeof a.length)return{next:aa(a)};throw Error(String(a)+" is not an iterable or ArrayLike");}
function ma(a){if(!(a instanceof Array)){a=v(a);for(var b,c=[];!(b=a.next()).done;)c.push(b.value);a=c}return a}
function na(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
var oa="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)na(d,e)&&(a[e]=d[e])}return a};
u("Object.assign",function(a){return a||oa});
var pa="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},qa=function(){function a(){function c(){}
new c;Reflect.construct(c,[],function(){});
return new c instanceof c}
if("undefined"!=typeof Reflect&&Reflect.construct){if(a())return Reflect.construct;var b=Reflect.construct;return function(c,d,e){c=b(c,d);e&&Reflect.setPrototypeOf(c,e.prototype);return c}}return function(c,d,e){void 0===e&&(e=c);
e=pa(e.prototype||Object.prototype);return Function.prototype.apply.call(c,e,d)||e}}(),ra;
if("function"==typeof Object.setPrototypeOf)ra=Object.setPrototypeOf;else{var sa;a:{var ta={a:!0},ua={};try{ua.__proto__=ta;sa=ua.a;break a}catch(a){}sa=!1}ra=sa?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var va=ra;
function w(a,b){a.prototype=pa(b.prototype);a.prototype.constructor=a;if(va)va(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.Aa=b.prototype}
function wa(){this.s=!1;this.m=null;this.i=void 0;this.h=1;this.G=this.l=0;this.B=this.j=null}
function xa(a){if(a.s)throw new TypeError("Generator is already running");a.s=!0}
wa.prototype.ga=function(a){this.i=a};
function ya(a,b){a.j={exception:b,nd:!0};a.h=a.l||a.G}
wa.prototype.return=function(a){this.j={return:a};this.h=this.G};
wa.prototype.yield=function(a,b){this.h=b;return{value:a}};
wa.prototype.v=function(a){this.h=a};
function za(a,b,c){a.l=b;void 0!=c&&(a.G=c)}
function Aa(a){a.l=0;var b=a.j.exception;a.j=null;return b}
function Ba(a){var b=a.B.splice(0)[0];(b=a.j=a.j||b)?b.nd?a.h=a.l||a.G:void 0!=b.v&&a.G<b.v?(a.h=b.v,a.j=null):a.h=a.G:a.h=0}
function Ca(a){this.h=new wa;this.i=a}
function Da(a,b){xa(a.h);var c=a.h.m;if(c)return Ea(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.h.return);
a.h.return(b);return Fa(a)}
function Ea(a,b,c,d){try{var e=b.call(a.h.m,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.h.s=!1,e;var f=e.value}catch(g){return a.h.m=null,ya(a.h,g),Fa(a)}a.h.m=null;d.call(a.h,f);return Fa(a)}
function Fa(a){for(;a.h.h;)try{var b=a.i(a.h);if(b)return a.h.s=!1,{value:b.value,done:!1}}catch(c){a.h.i=void 0,ya(a.h,c)}a.h.s=!1;if(a.h.j){b=a.h.j;a.h.j=null;if(b.nd)throw b.exception;return{value:b.return,done:!0}}return{value:void 0,done:!0}}
function Ga(a){this.next=function(b){xa(a.h);a.h.m?b=Ea(a,a.h.m.next,b,a.h.ga):(a.h.ga(b),b=Fa(a));return b};
this.throw=function(b){xa(a.h);a.h.m?b=Ea(a,a.h.m["throw"],b,a.h.ga):(ya(a.h,b),b=Fa(a));return b};
this.return=function(b){return Da(a,b)};
this[Symbol.iterator]=function(){return this}}
function Ha(a){function b(d){return a.next(d)}
function c(d){return a.throw(d)}
return new Promise(function(d,e){function f(g){g.done?d(g.value):Promise.resolve(g.value).then(b,c).then(f,e)}
f(a.next())})}
function A(a){return Ha(new Ga(new Ca(a)))}
function Ia(){for(var a=Number(this),b=[],c=a;c<arguments.length;c++)b[c-a]=arguments[c];return b}
u("Reflect",function(a){return a?a:{}});
u("Reflect.construct",function(){return qa});
u("Reflect.setPrototypeOf",function(a){return a?a:va?function(b,c){try{return va(b,c),!0}catch(d){return!1}}:null});
u("Promise",function(a){function b(g){this.h=0;this.j=void 0;this.i=[];this.s=!1;var h=this.l();try{g(h.resolve,h.reject)}catch(k){h.reject(k)}}
function c(){this.h=null}
function d(g){return g instanceof b?g:new b(function(h){h(g)})}
if(a)return a;c.prototype.i=function(g){if(null==this.h){this.h=[];var h=this;this.j(function(){h.m()})}this.h.push(g)};
var e=ia.setTimeout;c.prototype.j=function(g){e(g,0)};
c.prototype.m=function(){for(;this.h&&this.h.length;){var g=this.h;this.h=[];for(var h=0;h<g.length;++h){var k=g[h];g[h]=null;try{k()}catch(l){this.l(l)}}}this.h=null};
c.prototype.l=function(g){this.j(function(){throw g;})};
b.prototype.l=function(){function g(l){return function(n){k||(k=!0,l.call(h,n))}}
var h=this,k=!1;return{resolve:g(this.W),reject:g(this.m)}};
b.prototype.W=function(g){if(g===this)this.m(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.da(g);else{a:switch(typeof g){case "object":var h=null!=g;break a;case "function":h=!0;break a;default:h=!1}h?this.S(g):this.G(g)}};
b.prototype.S=function(g){var h=void 0;try{h=g.then}catch(k){this.m(k);return}"function"==typeof h?this.ea(h,g):this.G(g)};
b.prototype.m=function(g){this.ga(2,g)};
b.prototype.G=function(g){this.ga(1,g)};
b.prototype.ga=function(g,h){if(0!=this.h)throw Error("Cannot settle("+g+", "+h+"): Promise already settled in state"+this.h);this.h=g;this.j=h;2===this.h&&this.Y();this.B()};
b.prototype.Y=function(){var g=this;e(function(){if(g.R()){var h=ia.console;"undefined"!==typeof h&&h.error(g.j)}},1)};
b.prototype.R=function(){if(this.s)return!1;var g=ia.CustomEvent,h=ia.Event,k=ia.dispatchEvent;if("undefined"===typeof k)return!0;"function"===typeof g?g=new g("unhandledrejection",{cancelable:!0}):"function"===typeof h?g=new h("unhandledrejection",{cancelable:!0}):(g=ia.document.createEvent("CustomEvent"),g.initCustomEvent("unhandledrejection",!1,!0,g));g.promise=this;g.reason=this.j;return k(g)};
b.prototype.B=function(){if(null!=this.i){for(var g=0;g<this.i.length;++g)f.i(this.i[g]);this.i=null}};
var f=new c;b.prototype.da=function(g){var h=this.l();g.Yb(h.resolve,h.reject)};
b.prototype.ea=function(g,h){var k=this.l();try{g.call(h,k.resolve,k.reject)}catch(l){k.reject(l)}};
b.prototype.then=function(g,h){function k(t,r){return"function"==typeof t?function(x){try{l(t(x))}catch(y){n(y)}}:r}
var l,n,p=new b(function(t,r){l=t;n=r});
this.Yb(k(g,l),k(h,n));return p};
b.prototype.catch=function(g){return this.then(void 0,g)};
b.prototype.Yb=function(g,h){function k(){switch(l.h){case 1:g(l.j);break;case 2:h(l.j);break;default:throw Error("Unexpected state: "+l.h);}}
var l=this;null==this.i?f.i(k):this.i.push(k);this.s=!0};
b.resolve=d;b.reject=function(g){return new b(function(h,k){k(g)})};
b.race=function(g){return new b(function(h,k){for(var l=v(g),n=l.next();!n.done;n=l.next())d(n.value).Yb(h,k)})};
b.all=function(g){var h=v(g),k=h.next();return k.done?d([]):new b(function(l,n){function p(x){return function(y){t[x]=y;r--;0==r&&l(t)}}
var t=[],r=0;do t.push(void 0),r++,d(k.value).Yb(p(t.length-1),n),k=h.next();while(!k.done)})};
return b});
u("WeakMap",function(a){function b(k){this.h=(h+=Math.random()+1).toString();if(k){k=v(k);for(var l;!(l=k.next()).done;)l=l.value,this.set(l[0],l[1])}}
function c(){}
function d(k){var l=typeof k;return"object"===l&&null!==k||"function"===l}
function e(k){if(!na(k,g)){var l=new c;ea(k,g,{value:l})}}
function f(k){var l=Object[k];l&&(Object[k]=function(n){if(n instanceof c)return n;Object.isExtensible(n)&&e(n);return l(n)})}
if(function(){if(!a||!Object.seal)return!1;try{var k=Object.seal({}),l=Object.seal({}),n=new a([[k,2],[l,3]]);if(2!=n.get(k)||3!=n.get(l))return!1;n.delete(k);n.set(l,4);return!n.has(k)&&4==n.get(l)}catch(p){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var h=0;b.prototype.set=function(k,l){if(!d(k))throw Error("Invalid WeakMap key");e(k);if(!na(k,g))throw Error("WeakMap key fail: "+k);k[g][this.h]=l;return this};
b.prototype.get=function(k){return d(k)&&na(k,g)?k[g][this.h]:void 0};
b.prototype.has=function(k){return d(k)&&na(k,g)&&na(k[g],this.h)};
b.prototype.delete=function(k){return d(k)&&na(k,g)&&na(k[g],this.h)?delete k[g][this.h]:!1};
return b});
u("Map",function(a){function b(){var h={};return h.previous=h.next=h.head=h}
function c(h,k){var l=h[1];return ja(function(){if(l){for(;l.head!=h[1];)l=l.previous;for(;l.next!=l.head;)return l=l.next,{done:!1,value:k(l)};l=null}return{done:!0,value:void 0}})}
function d(h,k){var l=k&&typeof k;"object"==l||"function"==l?f.has(k)?l=f.get(k):(l=""+ ++g,f.set(k,l)):l="p_"+k;var n=h[0][l];if(n&&na(h[0],l))for(h=0;h<n.length;h++){var p=n[h];if(k!==k&&p.key!==p.key||k===p.key)return{id:l,list:n,index:h,entry:p}}return{id:l,list:n,index:-1,entry:void 0}}
function e(h){this[0]={};this[1]=b();this.size=0;if(h){h=v(h);for(var k;!(k=h.next()).done;)k=k.value,this.set(k[0],k[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var h=Object.seal({x:4}),k=new a(v([[h,"s"]]));if("s"!=k.get(h)||1!=k.size||k.get({x:4})||k.set({x:4},"t")!=k||2!=k.size)return!1;var l=k.entries(),n=l.next();if(n.done||n.value[0]!=h||"s"!=n.value[1])return!1;n=l.next();return n.done||4!=n.value[0].x||"t"!=n.value[1]||!l.next().done?!1:!0}catch(p){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(h,k){h=0===h?0:h;var l=d(this,h);l.list||(l.list=this[0][l.id]=[]);l.entry?l.entry.value=k:(l.entry={next:this[1],previous:this[1].previous,head:this[1],key:h,value:k},l.list.push(l.entry),this[1].previous.next=l.entry,this[1].previous=l.entry,this.size++);return this};
e.prototype.delete=function(h){h=d(this,h);return h.entry&&h.list?(h.list.splice(h.index,1),h.list.length||delete this[0][h.id],h.entry.previous.next=h.entry.next,h.entry.next.previous=h.entry.previous,h.entry.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this[0]={};this[1]=this[1].previous=b();this.size=0};
e.prototype.has=function(h){return!!d(this,h).entry};
e.prototype.get=function(h){return(h=d(this,h).entry)&&h.value};
e.prototype.entries=function(){return c(this,function(h){return[h.key,h.value]})};
e.prototype.keys=function(){return c(this,function(h){return h.key})};
e.prototype.values=function(){return c(this,function(h){return h.value})};
e.prototype.forEach=function(h,k){for(var l=this.entries(),n;!(n=l.next()).done;)n=n.value,h.call(k,n[1],n[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
function Ja(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
u("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=Ja(this,b,"endsWith");b+="";void 0===c&&(c=d.length);c=Math.max(0,Math.min(c|0,d.length));for(var e=b.length;0<e&&0<c;)if(d[--c]!=b[--e])return!1;return 0>=e}});
u("Object.setPrototypeOf",function(a){return a||va});
u("Array.prototype.find",function(a){return a?a:function(b,c){a:{var d=this;d instanceof String&&(d=String(d));for(var e=d.length,f=0;f<e;f++){var g=d[f];if(b.call(c,g,f,d)){b=g;break a}}b=void 0}return b}});
u("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=Ja(this,b,"startsWith");b+="";var e=d.length,f=b.length;c=Math.max(0,Math.min(c|0,d.length));for(var g=0;g<f&&c<e;)if(d[c++]!=b[g++])return!1;return g>=f}});
u("Number.isFinite",function(a){return a?a:function(b){return"number"!==typeof b?!1:!isNaN(b)&&Infinity!==b&&-Infinity!==b}});
function Ka(a,b){a instanceof String&&(a+="");var c=0,d=!1,e={next:function(){if(!d&&c<a.length){var f=c++;return{value:b(f,a[f]),done:!1}}d=!0;return{done:!0,value:void 0}}};
e[Symbol.iterator]=function(){return e};
return e}
u("Array.prototype.keys",function(a){return a?a:function(){return Ka(this,function(b){return b})}});
u("Set",function(a){function b(c){this.h=new Map;if(c){c=v(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.h.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(v([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.h.set(c,c);this.size=this.h.size;return this};
b.prototype.delete=function(c){c=this.h.delete(c);this.size=this.h.size;return c};
b.prototype.clear=function(){this.h.clear();this.size=0};
b.prototype.has=function(c){return this.h.has(c)};
b.prototype.entries=function(){return this.h.entries()};
b.prototype.values=function(){return this.h.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.h.forEach(function(f){return c.call(d,f,f,e)})};
return b});
u("Array.prototype.values",function(a){return a?a:function(){return Ka(this,function(b,c){return c})}});
u("Object.values",function(a){return a?a:function(b){var c=[],d;for(d in b)na(b,d)&&c.push(b[d]);return c}});
u("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
u("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length;c=c||0;for(0>c&&(c=Math.max(c+e,0));c<e;c++){var f=d[c];if(f===b||Object.is(f,b))return!0}return!1}});
u("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==Ja(this,b,"includes").indexOf(b,c||0)}});
u("Number.MAX_SAFE_INTEGER",function(){return 9007199254740991});
u("Number.isInteger",function(a){return a?a:function(b){return Number.isFinite(b)?b===Math.floor(b):!1}});
u("Array.prototype.entries",function(a){return a?a:function(){return Ka(this,function(b,c){return[b,c]})}});
u("Array.from",function(a){return a?a:function(b,c,d){c=null!=c?c:function(h){return h};
var e=[],f="undefined"!=typeof Symbol&&Symbol.iterator&&b[Symbol.iterator];if("function"==typeof f){b=f.call(b);for(var g=0;!(f=b.next()).done;)e.push(c.call(d,f.value,g++))}else for(f=b.length,g=0;g<f;g++)e.push(c.call(d,b[g],g));return e}});
u("Number.isNaN",function(a){return a?a:function(b){return"number"===typeof b&&isNaN(b)}});
u("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)na(b,d)&&c.push([d,b[d]]);return c}});
u("globalThis",function(a){return a||ia});/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var La=La||{},B=this||self;function C(a,b,c){a=a.split(".");c=c||B;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b}
function D(a,b){a=a.split(".");b=b||B;for(var c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function Ma(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Na(a){var b=Ma(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Oa(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Pa(a){return Object.prototype.hasOwnProperty.call(a,Qa)&&a[Qa]||(a[Qa]=++Ra)}
var Qa="closure_uid_"+(1E9*Math.random()>>>0),Ra=0;function Sa(a,b,c){return a.call.apply(a.bind,arguments)}
function Ta(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Ua(a,b,c){Ua=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Sa:Ta;return Ua.apply(null,arguments)}
function Va(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var d=c.slice();d.push.apply(d,arguments);return a.apply(this,d)}}
function Wa(){return Date.now()}
function Xa(a,b){function c(){}
c.prototype=b.prototype;a.Aa=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.base=function(d,e,f){for(var g=Array(arguments.length-2),h=2;h<arguments.length;h++)g[h-2]=arguments[h];return b.prototype[e].apply(d,g)}}
function Ya(a){return a}
;function Za(a,b){if(Error.captureStackTrace)Error.captureStackTrace(this,Za);else{var c=Error().stack;c&&(this.stack=c)}a&&(this.message=String(a));void 0!==b&&(this.cause=b)}
Xa(Za,Error);Za.prototype.name="CustomError";function $a(a){a=a.url;var b=/[?&]dsh=1(&|$)/.test(a);this.j=!b&&/[?&]ae=1(&|$)/.test(a);this.l=!b&&/[?&]ae=2(&|$)/.test(a);if((this.h=/[?&]adurl=([^&]*)/.exec(a))&&this.h[1]){try{var c=decodeURIComponent(this.h[1])}catch(d){c=null}this.i=c}}
;function bb(){}
function cb(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;var db=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},eb=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},fb=Array.prototype.filter?function(a,b){return Array.prototype.filter.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=[],e=0,f="string"===typeof a?a.split(""):a,g=0;g<c;g++)if(g in f){var h=f[g];
b.call(void 0,h,g,a)&&(d[e++]=h)}return d},gb=Array.prototype.map?function(a,b){return Array.prototype.map.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=Array(c),e="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in e&&(d[f]=b.call(void 0,e[f],f,a));
return d},hb=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
eb(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function ib(a,b){a:{for(var c=a.length,d="string"===typeof a?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){b=e;break a}b=-1}return 0>b?null:"string"===typeof a?a.charAt(b):a[b]}
function jb(a,b){b=db(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c}
function kb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Na(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function lb(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function mb(a){var b=nb,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function ob(a){for(var b in a)return!1;return!0}
function pb(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function qb(a){return null!==a&&"privembed"in a?a.privembed:!1}
function rb(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function sb(a){var b={},c;for(c in a)b[c]=a[c];return b}
function tb(a){if(!a||"object"!==typeof a)return a;if("function"===typeof a.clone)return a.clone();if("undefined"!==typeof Map&&a instanceof Map)return new Map(a);if("undefined"!==typeof Set&&a instanceof Set)return new Set(a);if(a instanceof Date)return new Date(a.getTime());var b=Array.isArray(a)?[]:"function"!==typeof ArrayBuffer||"function"!==typeof ArrayBuffer.isView||!ArrayBuffer.isView(a)||a instanceof DataView?{}:new a.constructor(a.length),c;for(c in a)b[c]=tb(a[c]);return b}
var ub="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function vb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<ub.length;f++)c=ub[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var wb;function xb(){if(void 0===wb){var a=null,b=B.trustedTypes;if(b&&b.createPolicy){try{a=b.createPolicy("goog#html",{createHTML:Ya,createScript:Ya,createScriptURL:Ya})}catch(c){B.console&&B.console.error(c.message)}wb=a}else wb=a}return wb}
;function yb(){}
function zb(a){return new yb(Ab,a)}
var Ab={};zb("");var Bb={};function Cb(a){this.h=a}
Cb.prototype.toString=function(){return this.h.toString()};function Db(a){this.h=a}
Db.prototype.toString=function(){return this.h+""};
function Eb(a){if(a instanceof Db&&a.constructor===Db)return a.h;Ma(a);return"type_error:TrustedResourceUrl"}
var Fb={};function Gb(a){var b=xb();a=b?b.createScriptURL(a):a;return new Db(a,Fb)}
;var Hb=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]};function Ib(a){this.h=a}
Ib.prototype.toString=function(){return this.h.toString()};
var Jb={},Kb=new Ib("about:invalid#zClosurez",Jb);var Lb,Mb=D("CLOSURE_FLAGS"),Nb=Mb&&Mb[610401301];Lb=null!=Nb?Nb:!1;function Ob(){var a=B.navigator;return a&&(a=a.userAgent)?a:""}
var Pb,Qb=B.navigator;Pb=Qb?Qb.userAgentData||null:null;function Rb(a){return Lb?Pb?Pb.brands.some(function(b){return(b=b.brand)&&-1!=b.indexOf(a)}):!1:!1}
function E(a){return-1!=Ob().indexOf(a)}
;function Sb(){return Lb?!!Pb&&0<Pb.brands.length:!1}
function Tb(){return Sb()?!1:E("Opera")}
function Ub(){return Sb()?!1:E("Trident")||E("MSIE")}
function Vb(){return E("Firefox")||E("FxiOS")}
function Wb(){return Sb()?Rb("Chromium"):(E("Chrome")||E("CriOS"))&&!(Sb()?0:E("Edge"))||E("Silk")}
;function Xb(a){this.h=a}
Xb.prototype.toString=function(){return this.h.toString()};function Yb(){a:{var a=B.document;if(a.querySelector&&(a=a.querySelector("script[nonce]"))&&(a=a.nonce||a.getAttribute("nonce"))&&Zb.test(a))break a;a=""}return a}
var Zb=/^[\w+/_-]+[=]{0,2}$/;function $b(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var ac=RegExp("^(?:([^:/?#.]+):)?(?://(?:([^\\\\/?#]*)@)?([^\\\\/?#]*?)(?::([0-9]+))?(?=[\\\\/?#]|$))?([^?#]+)?(?:\\?([^#]*))?(?:#([\\s\\S]*))?$");function bc(a){return a?decodeURI(a):a}
function cc(a,b){return b.match(ac)[a]||null}
function dc(a){return bc(cc(3,a))}
function ec(a){var b=a.match(ac);a=b[5];var c=b[6];b=b[7];var d="";a&&(d+=a);c&&(d+="?"+c);b&&(d+="#"+b);return d}
function fc(a){var b=a.indexOf("#");return 0>b?a:a.slice(0,b)}
function hc(a,b){if(!b)return a;var c=a.indexOf("#");0>c&&(c=a.length);var d=a.indexOf("?");if(0>d||d>c){d=c;var e=""}else e=a.substring(d+1,c);a=[a.slice(0,d),e,a.slice(c)];c=a[1];a[1]=b?c?c+"&"+b:b:c;return a[0]+(a[1]?"?"+a[1]:"")+a[2]}
function ic(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)ic(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function jc(a,b){var c=[];for(b=b||0;b<a.length;b+=2)ic(a[b],a[b+1],c);return c.join("&")}
function kc(a){var b=[],c;for(c in a)ic(c,a[c],b);return b.join("&")}
function lc(a,b){var c=2==arguments.length?jc(arguments[1],0):jc(arguments,1);return hc(a,c)}
function mc(a,b){b=kc(b);return hc(a,b)}
function nc(a,b,c){c=null!=c?"="+encodeURIComponent(String(c)):"";return hc(a,b+c)}
function oc(a,b,c,d){for(var e=c.length;0<=(b=a.indexOf(c,b))&&b<d;){var f=a.charCodeAt(b-1);if(38==f||63==f)if(f=a.charCodeAt(b+e),!f||61==f||38==f||35==f)return b;b+=e+1}return-1}
var pc=/#|$/,qc=/[?&]($|#)/;function rc(a,b){for(var c=a.search(pc),d=0,e,f=[];0<=(e=oc(a,d,b,c));)f.push(a.substring(d,e)),d=Math.min(a.indexOf("&",e)+1||c,c);f.push(a.slice(d));return f.join("").replace(qc,"$1")}
;function sc(a){this.h=a}
;function tc(a,b,c){this.i=a;this.l=b;this.h=c||[];this.qb=new Map}
m=tc.prototype;m.Nd=function(a){var b=Ia.apply(1,arguments),c=this.zc(b);c?c.push(new sc(a)):this.zd(a,b)};
m.zd=function(a){var b=this.getKey(Ia.apply(1,arguments));this.qb.set(b,[new sc(a)])};
m.zc=function(){var a=this.getKey(Ia.apply(0,arguments));return this.qb.has(a)?this.qb.get(a):void 0};
m.ee=function(){var a=this.zc(Ia.apply(0,arguments));return a&&a.length?a[0]:void 0};
m.clear=function(){this.qb.clear()};
m.getKey=function(){var a=Ia.apply(0,arguments);return a?a.join(","):"key"};function uc(a,b){tc.call(this,a,3,b)}
w(uc,tc);uc.prototype.j=function(a){var b=Ia.apply(1,arguments),c=0,d=this.ee(b);d&&(c=d.h);this.zd(c+a,b)};function vc(a,b){tc.call(this,a,2,b)}
w(vc,tc);vc.prototype.record=function(a){this.Nd(a,Ia.apply(1,arguments))};function wc(a){a&&"function"==typeof a.dispose&&a.dispose()}
;function xc(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];Na(d)?xc.apply(null,d):wc(d)}}
;function F(){this.ga=this.ga;this.G=this.G}
F.prototype.ga=!1;F.prototype.Z=function(){return this.ga};
F.prototype.dispose=function(){this.ga||(this.ga=!0,this.M())};
function yc(a,b){zc(a,Va(wc,b))}
function zc(a,b){a.ga?b():(a.G||(a.G=[]),a.G.push(b))}
F.prototype.M=function(){if(this.G)for(;this.G.length;)this.G.shift()()};function Ac(a,b){this.type=a;this.h=this.target=b;this.defaultPrevented=this.j=!1}
Ac.prototype.stopPropagation=function(){this.j=!0};
Ac.prototype.preventDefault=function(){this.defaultPrevented=!0};function Bc(a,b){a.__closure__error__context__984382||(a.__closure__error__context__984382={});a.__closure__error__context__984382.severity=b}
;function Cc(a){var b=D("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(g){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||B.$googDebugFname||b}catch(g){e="Not available",c=!0}b=Dc(a);if(!(!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name)){c=a.message;if(null==
c){if(a.constructor&&a.constructor instanceof Function){if(a.constructor.name)c=a.constructor.name;else if(c=a.constructor,Ec[c])c=Ec[c];else{c=String(c);if(!Ec[c]){var f=/function\s+([^\(]+)/m.exec(c);Ec[c]=f?f[1]:"[Anonymous]"}c=Ec[c]}c='Unknown Error of type "'+c+'"'}else c="Unknown Error of unknown type";"function"===typeof a.toString&&Object.prototype.toString!==a.toString&&(c+=": "+a.toString())}return{message:c,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:b||"Not available"}}a.stack=
b;return{message:a.message,name:a.name,lineNumber:a.lineNumber,fileName:a.fileName,stack:a.stack}}
function Dc(a,b){b||(b={});b[Fc(a)]=!0;var c=a.stack||"";(a=a.cause)&&!b[Fc(a)]&&(c+="\nCaused by: ",a.stack&&0==a.stack.indexOf(a.toString())||(c+="string"===typeof a?a:a.message+"\n"),c+=Dc(a,b));return c}
function Fc(a){var b="";"function"===typeof a.toString&&(b=""+a);return b+a.stack}
var Ec={};var Gc=function(){if(!B.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});
try{var c=function(){};
B.addEventListener("test",c,b);B.removeEventListener("test",c,b)}catch(d){}return a}();function Hc(){return Lb?!!Pb&&!!Pb.platform:!1}
function Ic(){return E("iPhone")&&!E("iPod")&&!E("iPad")}
;function Mc(a){Mc[" "](a);return a}
Mc[" "]=function(){};var Nc=Tb(),Oc=Ub(),Pc=E("Edge"),Qc=E("Gecko")&&!(-1!=Ob().toLowerCase().indexOf("webkit")&&!E("Edge"))&&!(E("Trident")||E("MSIE"))&&!E("Edge"),Rc=-1!=Ob().toLowerCase().indexOf("webkit")&&!E("Edge");Rc&&E("Mobile");Hc()||E("Macintosh");Hc()||E("Windows");(Hc()?"Linux"===Pb.platform:E("Linux"))||Hc()||E("CrOS");var Sc=B.navigator||null;Sc&&(Sc.appVersion||"").indexOf("X11");var Tc=Hc()?"Android"===Pb.platform:E("Android");Ic();E("iPad");E("iPod");Ic()||E("iPad")||E("iPod");Ob().toLowerCase().indexOf("kaios");
function Uc(){var a=B.document;return a?a.documentMode:void 0}
var Vc;a:{var Wc="",Xc=function(){var a=Ob();if(Qc)return/rv:([^\);]+)(\)|;)/.exec(a);if(Pc)return/Edge\/([\d\.]+)/.exec(a);if(Oc)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(Rc)return/WebKit\/(\S+)/.exec(a);if(Nc)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
Xc&&(Wc=Xc?Xc[1]:"");if(Oc){var Yc=Uc();if(null!=Yc&&Yc>parseFloat(Wc)){Vc=String(Yc);break a}}Vc=Wc}var Zc=Vc,$c;if(B.document&&Oc){var ad=Uc();$c=ad?ad:parseInt(Zc,10)||void 0}else $c=void 0;var bd=$c;function cd(a,b){Ac.call(this,a?a.type:"");this.relatedTarget=this.h=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.i=null;a&&this.init(a,b)}
Xa(cd,Ac);var dd={2:"touch",3:"pen",4:"mouse"};
cd.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches&&a.changedTouches.length?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.h=b;if(b=a.relatedTarget){if(Qc){a:{try{Mc(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;d?(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||
0):(this.clientX=void 0!==a.clientX?a.clientX:a.pageX,this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType="string"===typeof a.pointerType?a.pointerType:dd[a.pointerType]||"";this.state=a.state;
this.i=a;a.defaultPrevented&&cd.Aa.preventDefault.call(this)};
cd.prototype.stopPropagation=function(){cd.Aa.stopPropagation.call(this);this.i.stopPropagation?this.i.stopPropagation():this.i.cancelBubble=!0};
cd.prototype.preventDefault=function(){cd.Aa.preventDefault.call(this);var a=this.i;a.preventDefault?a.preventDefault():a.returnValue=!1};var ed="closure_listenable_"+(1E6*Math.random()|0);var fd=0;function gd(a,b,c,d,e){this.listener=a;this.proxy=null;this.src=b;this.type=c;this.capture=!!d;this.dc=e;this.key=++fd;this.Rb=this.Xb=!1}
function hd(a){a.Rb=!0;a.listener=null;a.proxy=null;a.src=null;a.dc=null}
;function id(a){this.src=a;this.listeners={};this.h=0}
id.prototype.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.h++);var g=jd(a,b,d,e);-1<g?(b=a[g],c||(b.Xb=!1)):(b=new gd(b,this.src,f,!!d,e),b.Xb=c,a.push(b));return b};
id.prototype.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=jd(e,b,c,d);return-1<b?(hd(e[b]),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.h--),!0):!1};
function kd(a,b){var c=b.type;c in a.listeners&&jb(a.listeners[c],b)&&(hd(b),0==a.listeners[c].length&&(delete a.listeners[c],a.h--))}
function jd(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.Rb&&f.listener==b&&f.capture==!!c&&f.dc==d)return e}return-1}
;var ld="closure_lm_"+(1E6*Math.random()|0),md={},nd=0;function od(a,b,c,d,e){if(d&&d.once)pd(a,b,c,d,e);else if(Array.isArray(b))for(var f=0;f<b.length;f++)od(a,b[f],c,d,e);else c=qd(c),a&&a[ed]?a.listen(b,c,Oa(d)?!!d.capture:!!d,e):rd(a,b,c,!1,d,e)}
function rd(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var g=Oa(e)?!!e.capture:!!e,h=sd(a);h||(a[ld]=h=new id(a));c=h.add(b,c,d,g,f);if(!c.proxy){d=td();c.proxy=d;d.src=a;d.listener=c;if(a.addEventListener)Gc||(e=g),void 0===e&&(e=!1),a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(ud(b.toString()),d);else if(a.addListener&&a.removeListener)a.addListener(d);else throw Error("addEventListener and attachEvent are unavailable.");nd++}}
function td(){function a(c){return b.call(a.src,a.listener,c)}
var b=vd;return a}
function pd(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)pd(a,b[f],c,d,e);else c=qd(c),a&&a[ed]?a.h.add(String(b),c,!0,Oa(d)?!!d.capture:!!d,e):rd(a,b,c,!0,d,e)}
function wd(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)wd(a,b[f],c,d,e);else(d=Oa(d)?!!d.capture:!!d,c=qd(c),a&&a[ed])?a.h.remove(String(b),c,d,e):a&&(a=sd(a))&&(b=a.listeners[b.toString()],a=-1,b&&(a=jd(b,c,d,e)),(c=-1<a?b[a]:null)&&xd(c))}
function xd(a){if("number"!==typeof a&&a&&!a.Rb){var b=a.src;if(b&&b[ed])kd(b.h,a);else{var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent?b.detachEvent(ud(c),d):b.addListener&&b.removeListener&&b.removeListener(d);nd--;(c=sd(b))?(kd(c,a),0==c.h&&(c.src=null,b[ld]=null)):hd(a)}}}
function ud(a){return a in md?md[a]:md[a]="on"+a}
function vd(a,b){if(a.Rb)a=!0;else{b=new cd(b,this);var c=a.listener,d=a.dc||a.src;a.Xb&&xd(a);a=c.call(d,b)}return a}
function sd(a){a=a[ld];return a instanceof id?a:null}
var yd="__closure_events_fn_"+(1E9*Math.random()>>>0);function qd(a){if("function"===typeof a)return a;a[yd]||(a[yd]=function(b){return a.handleEvent(b)});
return a[yd]}
;function zd(){F.call(this);this.h=new id(this);this.Ia=this;this.ea=null}
Xa(zd,F);zd.prototype[ed]=!0;m=zd.prototype;m.addEventListener=function(a,b,c,d){od(this,a,b,c,d)};
m.removeEventListener=function(a,b,c,d){wd(this,a,b,c,d)};
function Ad(a,b){var c=a.ea;if(c){var d=[];for(var e=1;c;c=c.ea)d.push(c),++e}a=a.Ia;c=b.type||b;"string"===typeof b?b=new Ac(b,a):b instanceof Ac?b.target=b.target||a:(e=b,b=new Ac(c,a),vb(b,e));e=!0;if(d)for(var f=d.length-1;!b.j&&0<=f;f--){var g=b.h=d[f];e=Bd(g,c,!0,b)&&e}b.j||(g=b.h=a,e=Bd(g,c,!0,b)&&e,b.j||(e=Bd(g,c,!1,b)&&e));if(d)for(f=0;!b.j&&f<d.length;f++)g=b.h=d[f],e=Bd(g,c,!1,b)&&e}
m.M=function(){zd.Aa.M.call(this);this.removeAllListeners();this.ea=null};
m.listen=function(a,b,c,d){return this.h.add(String(a),b,!1,c,d)};
m.removeAllListeners=function(a){if(this.h){var b=this.h;a=a&&a.toString();var c=0,d;for(d in b.listeners)if(!a||d==a){for(var e=b.listeners[d],f=0;f<e.length;f++)++c,hd(e[f]);delete b.listeners[d];b.h--}b=c}else b=0;return b};
function Bd(a,b,c,d){b=a.h.listeners[String(b)];if(!b)return!0;b=b.concat();for(var e=!0,f=0;f<b.length;++f){var g=b[f];if(g&&!g.Rb&&g.capture==c){var h=g.listener,k=g.dc||g.src;g.Xb&&kd(a.h,g);e=!1!==h.call(k,d)&&e}}return e&&!d.defaultPrevented}
;function Cd(a,b){this.j=a;this.l=b;this.i=0;this.h=null}
Cd.prototype.get=function(){if(0<this.i){this.i--;var a=this.h;this.h=a.next;a.next=null}else a=this.j();return a};
function Dd(a,b){a.l(b);100>a.i&&(a.i++,b.next=a.h,a.h=b)}
;function Ed(a,b){return a+Math.random()*(b-a)}
;function Fd(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}
m=Fd.prototype;m.clone=function(){return new Fd(this.x,this.y)};
m.equals=function(a){return a instanceof Fd&&(this==a?!0:this&&a?this.x==a.x&&this.y==a.y:!1)};
m.ceil=function(){this.x=Math.ceil(this.x);this.y=Math.ceil(this.y);return this};
m.floor=function(){this.x=Math.floor(this.x);this.y=Math.floor(this.y);return this};
m.round=function(){this.x=Math.round(this.x);this.y=Math.round(this.y);return this};
m.scale=function(a,b){this.x*=a;this.y*="number"===typeof b?b:a;return this};function Gd(a,b){this.width=a;this.height=b}
m=Gd.prototype;m.clone=function(){return new Gd(this.width,this.height)};
m.aspectRatio=function(){return this.width/this.height};
m.Mb=function(){return!(this.width*this.height)};
m.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
m.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
m.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};
m.scale=function(a,b){this.width*=a;this.height*="number"===typeof b?b:a;return this};function Hd(a){var b=document;return"string"===typeof a?b.getElementById(a):a}
function Id(a){var b=document;a=String(a);"application/xhtml+xml"===b.contentType&&(a=a.toLowerCase());return b.createElement(a)}
function Jd(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;var Kd;function Ld(){var a=B.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!E("Presto")&&(a=function(){var e=Id("IFRAME");e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),h="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Ua(function(k){if(("*"==h||k.origin==h)&&k.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,h)}}});
if("undefined"!==typeof a&&!Ub()){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.bd;c.bd=null;e()}};
return function(e){d.next={bd:e};d=d.next;b.port2.postMessage(0)}}return function(e){B.setTimeout(e,0)}}
;function Md(a){B.setTimeout(function(){throw a;},0)}
;function Nd(){this.i=this.h=null}
Nd.prototype.add=function(a,b){var c=Od.get();c.set(a,b);this.i?this.i.next=c:this.h=c;this.i=c};
Nd.prototype.remove=function(){var a=null;this.h&&(a=this.h,this.h=this.h.next,this.h||(this.i=null),a.next=null);return a};
var Od=new Cd(function(){return new Pd},function(a){return a.reset()});
function Pd(){this.next=this.scope=this.h=null}
Pd.prototype.set=function(a,b){this.h=a;this.scope=b;this.next=null};
Pd.prototype.reset=function(){this.next=this.scope=this.h=null};var Qd,Rd=!1,Sd=new Nd;function Td(a,b){Qd||Ud();Rd||(Qd(),Rd=!0);Sd.add(a,b)}
function Ud(){if(B.Promise&&B.Promise.resolve){var a=B.Promise.resolve(void 0);Qd=function(){a.then(Vd)}}else Qd=function(){var b=Vd;
"function"!==typeof B.setImmediate||B.Window&&B.Window.prototype&&(Sb()||!E("Edge"))&&B.Window.prototype.setImmediate==B.setImmediate?(Kd||(Kd=Ld()),Kd(b)):B.setImmediate(b)}}
function Vd(){for(var a;a=Sd.remove();){try{a.h.call(a.scope)}catch(b){Md(b)}Dd(Od,a)}Rd=!1}
;function Wd(a){this.h=0;this.s=void 0;this.l=this.i=this.j=null;this.m=this.G=!1;if(a!=bb)try{var b=this;a.call(void 0,function(c){Xd(b,2,c)},function(c){Xd(b,3,c)})}catch(c){Xd(this,3,c)}}
function Yd(){this.next=this.context=this.h=this.i=this.child=null;this.j=!1}
Yd.prototype.reset=function(){this.context=this.h=this.i=this.child=null;this.j=!1};
var Zd=new Cd(function(){return new Yd},function(a){a.reset()});
function $d(a,b,c){var d=Zd.get();d.i=a;d.h=b;d.context=c;return d}
function ae(a){return new Wd(function(b,c){c(a)})}
Wd.prototype.then=function(a,b,c){return be(this,"function"===typeof a?a:null,"function"===typeof b?b:null,c)};
Wd.prototype.$goog_Thenable=!0;m=Wd.prototype;m.qc=function(a,b){return be(this,null,a,b)};
m.catch=Wd.prototype.qc;m.cancel=function(a){if(0==this.h){var b=new ce(a);Td(function(){de(this,b)},this)}};
function de(a,b){if(0==a.h)if(a.j){var c=a.j;if(c.i){for(var d=0,e=null,f=null,g=c.i;g&&(g.j||(d++,g.child==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.h&&1==d?de(c,b):(f?(d=f,d.next==c.l&&(c.l=d),d.next=d.next.next):ee(c),fe(c,e,3,b)))}a.j=null}else Xd(a,3,b)}
function ge(a,b){a.i||2!=a.h&&3!=a.h||he(a);a.l?a.l.next=b:a.i=b;a.l=b}
function be(a,b,c,d){var e=$d(null,null,null);e.child=new Wd(function(f,g){e.i=b?function(h){try{var k=b.call(d,h);f(k)}catch(l){g(l)}}:f;
e.h=c?function(h){try{var k=c.call(d,h);void 0===k&&h instanceof ce?g(h):f(k)}catch(l){g(l)}}:g});
e.child.j=a;ge(a,e);return e.child}
m.df=function(a){this.h=0;Xd(this,2,a)};
m.ef=function(a){this.h=0;Xd(this,3,a)};
function Xd(a,b,c){if(0==a.h){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.h=1;a:{var d=c,e=a.df,f=a.ef;if(d instanceof Wd){ge(d,$d(e||bb,f||null,a));var g=!0}else{if(d)try{var h=!!d.$goog_Thenable}catch(l){h=!1}else h=!1;if(h)d.then(e,f,a),g=!0;else{if(Oa(d))try{var k=d.then;if("function"===typeof k){ie(d,k,e,f,a);g=!0;break a}}catch(l){f.call(a,l);g=!0;break a}g=!1}}}g||(a.s=c,a.h=b,a.j=null,he(a),3!=b||c instanceof ce||je(a,c))}}
function ie(a,b,c,d,e){function f(k){h||(h=!0,d.call(e,k))}
function g(k){h||(h=!0,c.call(e,k))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function he(a){a.G||(a.G=!0,Td(a.Zd,a))}
function ee(a){var b=null;a.i&&(b=a.i,a.i=b.next,b.next=null);a.i||(a.l=null);return b}
m.Zd=function(){for(var a;a=ee(this);)fe(this,a,this.h,this.s);this.G=!1};
function fe(a,b,c,d){if(3==c&&b.h&&!b.j)for(;a&&a.m;a=a.j)a.m=!1;if(b.child)b.child.j=null,ke(b,c,d);else try{b.j?b.i.call(b.context):ke(b,c,d)}catch(e){le.call(null,e)}Dd(Zd,b)}
function ke(a,b,c){2==b?a.i.call(a.context,c):a.h&&a.h.call(a.context,c)}
function je(a,b){a.m=!0;Td(function(){a.m&&le.call(null,b)})}
var le=Md;function ce(a){Za.call(this,a)}
Xa(ce,Za);ce.prototype.name="cancel";function me(a,b){zd.call(this);this.j=a||1;this.i=b||B;this.l=Ua(this.bf,this);this.m=Wa()}
Xa(me,zd);m=me.prototype;m.enabled=!1;m.Ea=null;m.setInterval=function(a){this.j=a;this.Ea&&this.enabled?(this.stop(),this.start()):this.Ea&&this.stop()};
m.bf=function(){if(this.enabled){var a=Wa()-this.m;0<a&&a<.8*this.j?this.Ea=this.i.setTimeout(this.l,this.j-a):(this.Ea&&(this.i.clearTimeout(this.Ea),this.Ea=null),Ad(this,"tick"),this.enabled&&(this.stop(),this.start()))}};
m.start=function(){this.enabled=!0;this.Ea||(this.Ea=this.i.setTimeout(this.l,this.j),this.m=Wa())};
m.stop=function(){this.enabled=!1;this.Ea&&(this.i.clearTimeout(this.Ea),this.Ea=null)};
m.M=function(){me.Aa.M.call(this);this.stop();delete this.i};
function ne(a,b,c){if("function"===typeof a)c&&(a=Ua(a,c));else if(a&&"function"==typeof a.handleEvent)a=Ua(a.handleEvent,a);else throw Error("Invalid listener argument");return 2147483647<Number(b)?-1:B.setTimeout(a,b||0)}
;function oe(a){F.call(this);this.B=a;this.i=new Map;this.s=new Set;this.j=0;this.l=100;this.flushInterval=3E4;this.h=new me(this.flushInterval);this.h.listen("tick",this.nb,!1,this);yc(this,this.h);this.m=!1}
w(oe,F);m=oe.prototype;m.sendIsolatedPayload=function(a){this.m=a;this.l=1};
function pe(a){a.h.enabled||a.h.start();a.j++;a.j>=a.l&&a.nb()}
m.nb=function(){var a=this.i.values();a=[].concat(ma(a)).filter(function(b){return b.qb.size});
a.length&&this.B.flush(a,this.m);qe(a);this.j=0;this.h.enabled&&this.h.stop()};
m.Vc=function(a){var b=Ia.apply(1,arguments);this.i.has(a)||this.i.set(a,new uc(a,b))};
m.Wc=function(a){var b=Ia.apply(1,arguments);this.i.has(a)||this.i.set(a,new vc(a,b))};
function re(a,b){return a.s.has(b)?void 0:a.i.get(b)}
m.sc=function(a){this.Ld.apply(this,[a,1].concat(ma(Ia.apply(1,arguments))))};
m.Ld=function(a,b){var c=Ia.apply(2,arguments),d=re(this,a);d&&d instanceof uc&&(d.j(b,c),pe(this))};
m.record=function(a,b){var c=Ia.apply(2,arguments),d=re(this,a);d&&d instanceof vc&&(d.record(b,c),pe(this))};
function qe(a){for(var b=0;b<a.length;b++)a[b].clear()}
;function se(a){this.h=a;this.h.Vc("/client_streamz/bg/fiec",{cb:3,bb:"rk"},{cb:2,bb:"ec"},{cb:3,bb:"em"})}
function te(a,b,c,d){a.h.sc("/client_streamz/bg/fiec",b,c,d)}
function ue(a){this.h=a;this.h.Wc("/client_streamz/bg/fil",{cb:3,bb:"rk"},{cb:3,bb:"ke"})}
ue.prototype.record=function(a,b,c){this.h.record("/client_streamz/bg/fil",a,b,c)};
function ve(a){this.h=a;this.h.Vc("/client_streamz/bg/fsc",{cb:3,bb:"rk"})}
function we(a){this.h=a;this.h.Wc("/client_streamz/bg/fsl",{cb:3,bb:"rk"})}
we.prototype.record=function(a,b){this.h.record("/client_streamz/bg/fsl",a,b)};var xe={toString:function(a){var b=[],c=0;a-=-2147483648;b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".charAt(a%52);for(a=Math.floor(a/52);0<a;)b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".charAt(a%62),a=Math.floor(a/62);return b.join("")}};function ye(a){function b(){c-=d;c-=e;c^=e>>>13;d-=e;d-=c;d^=c<<8;e-=c;e-=d;e^=d>>>13;c-=d;c-=e;c^=e>>>12;d-=e;d-=c;d^=c<<16;e-=c;e-=d;e^=d>>>5;c-=d;c-=e;c^=e>>>3;d-=e;d-=c;d^=c<<10;e-=c;e-=d;e^=d>>>15}
a=ze(a);for(var c=2654435769,d=2654435769,e=314159265,f=a.length,g=f,h=0;12<=g;g-=12,h+=12)c+=Ae(a,h),d+=Ae(a,h+4),e+=Ae(a,h+8),b();e+=f;switch(g){case 11:e+=a[h+10]<<24;case 10:e+=a[h+9]<<16;case 9:e+=a[h+8]<<8;case 8:d+=a[h+7]<<24;case 7:d+=a[h+6]<<16;case 6:d+=a[h+5]<<8;case 5:d+=a[h+4];case 4:c+=a[h+3]<<24;case 3:c+=a[h+2]<<16;case 2:c+=a[h+1]<<8;case 1:c+=a[h+0]}b();return xe.toString(e)}
function ze(a){for(var b=[],c=0;c<a.length;c++)b.push(a.charCodeAt(c));return b}
function Ae(a,b){return a[b+0]+(a[b+1]<<8)+(a[b+2]<<16)+(a[b+3]<<24)}
;Vb();var Be=Ic()||E("iPod"),Ce=E("iPad");!E("Android")||Wb()||Vb()||Tb()||E("Silk");Wb();var De=E("Safari")&&!(Wb()||(Sb()?0:E("Coast"))||Tb()||(Sb()?0:E("Edge"))||(Sb()?Rb("Microsoft Edge"):E("Edg/"))||(Sb()?Rb("Opera"):E("OPR"))||Vb()||E("Silk")||E("Android"))&&!(Ic()||E("iPad")||E("iPod"));var Ee={},Fe=null;function Ge(a,b){Na(a);void 0===b&&(b=0);He();b=Ee[b];for(var c=Array(Math.floor(a.length/3)),d=b[64]||"",e=0,f=0;e<a.length-2;e+=3){var g=a[e],h=a[e+1],k=a[e+2],l=b[g>>2];g=b[(g&3)<<4|h>>4];h=b[(h&15)<<2|k>>6];k=b[k&63];c[f++]=""+l+g+h+k}l=0;k=d;switch(a.length-e){case 2:l=a[e+1],k=b[(l&15)<<2]||d;case 1:a=a[e],c[f]=""+b[a>>2]+b[(a&3)<<4|l>>4]+k+d}return c.join("")}
function Ie(a){var b=a.length,c=3*b/4;c%3?c=Math.floor(c):-1!="=.".indexOf(a[b-1])&&(c=-1!="=.".indexOf(a[b-2])?c-2:c-1);var d=new Uint8Array(c),e=0;Je(a,function(f){d[e++]=f});
return e!==c?d.subarray(0,e):d}
function Je(a,b){function c(k){for(;d<a.length;){var l=a.charAt(d++),n=Fe[l];if(null!=n)return n;if(!/^[\s\xa0]*$/.test(l))throw Error("Unknown base64 encoding at char: "+l);}return k}
He();for(var d=0;;){var e=c(-1),f=c(0),g=c(64),h=c(64);if(64===h&&-1===e)break;b(e<<2|f>>4);64!=g&&(b(f<<4&240|g>>2),64!=h&&b(g<<6&192|h))}}
function He(){if(!Fe){Fe={};for(var a="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),b=["+/=","+/","-_=","-_.","-_"],c=0;5>c;c++){var d=a.concat(b[c].split(""));Ee[c]=d;for(var e=0;e<d.length;e++){var f=d[e];void 0===Fe[f]&&(Fe[f]=e)}}}}
;var Ke="undefined"!==typeof Uint8Array,Le=!Oc&&"function"===typeof btoa;function Me(a){if(!Le)return Ge(a);for(var b="",c=0,d=a.length-10240;c<d;)b+=String.fromCharCode.apply(null,a.subarray(c,c+=10240));b+=String.fromCharCode.apply(null,c?a.subarray(c):a);return btoa(b)}
var Ne=/[-_.]/g,Oe={"-":"+",_:"/",".":"="};function Pe(a){return Oe[a]||""}
function Qe(a){return Ke&&null!=a&&a instanceof Uint8Array}
var Re={};var Se;function Te(a){if(a!==Re)throw Error("illegal external caller");}
function Ue(a,b){Te(b);this.value_=a;if(null!=a&&0===a.length)throw Error("ByteString should be constructed with non-empty values");}
Ue.prototype.Mb=function(){return null==this.value_};
Ue.prototype.sizeBytes=function(){Te(Re);var a=this.value_;if(null!=a&&!Qe(a))if("string"===typeof a)if(Le){Ne.test(a)&&(a=a.replace(Ne,Pe));a=atob(a);for(var b=new Uint8Array(a.length),c=0;c<a.length;c++)b[c]=a.charCodeAt(c);a=b}else a=Ie(a);else Ma(a),a=null;return(a=null==a?a:this.value_=a)?a.length:0};function Ve(a){return Array.prototype.slice.call(a)}
;var We="function"===typeof Symbol&&"symbol"===typeof Symbol()?Symbol():void 0;Math.max.apply(Math,ma(Object.values({Gf:1,Ef:2,Df:4,Jf:8,If:16,Hf:32,vf:64,Kf:128,Cf:256,Bf:512,Ff:1024,Af:2048})));var Xe=We?function(a,b){a[We]|=b}:function(a,b){void 0!==a.Sa?a.Sa|=b:Object.defineProperties(a,{Sa:{value:b,
configurable:!0,writable:!0,enumerable:!1}})};
function Ye(a){var b=Ze(a);1!==(b&1)&&(Object.isFrozen(a)&&(a=Ve(a)),$e(a,b|1))}
function af(a,b,c){return c?a|b:a&~b}
var Ze=We?function(a){return a[We]|0}:function(a){return a.Sa|0},bf=We?function(a){return a[We]}:function(a){return a.Sa},$e=We?function(a,b){a[We]=b}:function(a,b){void 0!==a.Sa?a.Sa=b:Object.defineProperties(a,{Sa:{value:b,
configurable:!0,writable:!0,enumerable:!1}})};
function cf(){var a=[];Xe(a,1);return a}
function df(a,b){$e(b,(a|0)&-2303)}
function ef(a,b){$e(b,(a|34)&-2269)}
function ff(a){a=a>>12&1023;return 0===a?536870912:a}
;var gf={};function hf(a){return null!==a&&"object"===typeof a&&!Array.isArray(a)&&a.constructor===Object}
var jf;function kf(a,b){if(null==a){if(!b)throw Error();}else if("string"===typeof a)a=a?new Ue(a,Re):Se||(Se=new Ue(null,Re));else if(a.constructor!==Ue)if(Qe(a))a instanceof Uint8Array||Array.isArray(a),a=a.length?new Ue(new Uint8Array(a),Re):Se||(Se=new Ue(null,Re));else throw Error();return a}
var lf,mf=[];$e(mf,55);lf=Object.freeze(mf);function nf(a){if(a&2)throw Error();}
;function of(){var a=Error();Bc(a,"incident");Md(a)}
function pf(a){a=Error(a);Bc(a,"warning");return a}
;function qf(a){return a.displayName||a.name||"unknown type name"}
function rf(a){if(null!=a){if("boolean"!==typeof a)throw Error("Expected boolean but got "+Ma(a)+": "+a);a=!!a}return a}
var sf=/^-?([1-9][0-9]*|0)(\.[0-9]+)?$/;function tf(a){var b=typeof a;return"number"===b?Number.isFinite(a):"string"!==b?!1:sf.test(a)}
function uf(a){if(null!=a){if("number"!==typeof a)throw pf("int32");Number.isFinite(a)||of()}return a}
function vf(a){if(null==a)return a;if("string"===typeof a){if(!a)return;a=+a}if("number"===typeof a)return a}
function wf(a){if(null!=a){if(!tf(a))throw pf("int64");a="string"===typeof a?xf(a):yf(a)}return a}
function yf(a){tf(a);return a}
function xf(a){tf(a);return a}
function zf(a){if("string"!==typeof a)throw Error();return a}
function Af(a){if(null!=a&&"string"!==typeof a)throw Error();return a}
function Bf(a,b){if(!(a instanceof b))throw Error("Expected instanceof "+qf(b)+" but got "+(a&&qf(a.constructor)));}
function Cf(a,b,c){if(null!=a&&"object"===typeof a&&a.Jc===gf)return a;if(Array.isArray(a)){var d=Ze(a),e=d;0===e&&(e|=c&32);e|=c&2;e!==d&&$e(a,e);return new b(a)}}
;var Df;function Ef(a,b){Ze(b);Df=b;a=new a(b);Df=void 0;return a}
function Ff(a,b,c){null==a&&(a=Df);Df=void 0;if(null==a){var d=96;c?(a=[c],d|=512):a=[];b&&(d=d&-4190209|(b&1023)<<12)}else{if(!Array.isArray(a))throw Error();d=Ze(a);if(d&64)return a;d|=64;if(c&&(d|=512,c!==a[0]))throw Error();a:{c=a;var e=c.length;if(e){var f=e-1,g=c[f];if(hf(g)){d|=256;b=+!!(d&512)-1;e=f-b;1024<=e&&(Gf(c,b,g),e=1023);d=d&-4190209|(e&1023)<<12;break a}}b&&(g=+!!(d&512)-1,b=Math.max(b,e-g),1024<b&&(Gf(c,g,{}),d|=256,b=1023),d=d&-4190209|(b&1023)<<12)}}$e(a,d);return a}
function Gf(a,b,c){for(var d=1023+b,e=a.length,f=d;f<e;f++){var g=a[f];null!=g&&g!==c&&(c[f-b]=g)}a.length=d+1;a[d]=c}
;function Hf(a,b){return If(b)}
function If(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "boolean":return a?1:0;case "object":if(a&&!Array.isArray(a)){if(Qe(a))return Me(a);if(a instanceof Ue){var b=a.value_;return null==b?"":"string"===typeof b?b:a.value_=Me(b)}}}return a}
;function Jf(a,b,c){a=Ve(a);var d=a.length,e=b&256?a[d-1]:void 0;d+=e?-1:0;for(b=b&512?1:0;b<d;b++)a[b]=c(a[b]);if(e){b=a[b]={};for(var f in e)b[f]=c(e[f])}return a}
function Kf(a,b,c,d,e,f){if(null!=a){if(Array.isArray(a))a=e&&0==a.length&&Ze(a)&1?void 0:f&&Ze(a)&2?a:Lf(a,b,c,void 0!==d,e,f);else if(hf(a)){var g={},h;for(h in a)g[h]=Kf(a[h],b,c,d,e,f);a=g}else a=b(a,d);return a}}
function Lf(a,b,c,d,e,f){var g=d||c?Ze(a):0;d=d?!!(g&32):void 0;a=Ve(a);for(var h=0;h<a.length;h++)a[h]=Kf(a[h],b,c,d,e,f);c&&c(g,a);return a}
function Mf(a){return a.Jc===gf?a.toJSON():If(a)}
;function Nf(a,b,c){c=void 0===c?ef:c;if(null!=a){if(Ke&&a instanceof Uint8Array)return b?a:new Uint8Array(a);if(Array.isArray(a)){var d=Ze(a);if(d&2)return a;b&&(b=0===d||!!(d&32)&&!(d&64||!(d&16)));return b?($e(a,(d|34)&-5),a):Lf(a,Nf,d&4?ef:c,!0,!1,!0)}a.Jc===gf&&(c=a.A,d=bf(c),a=d&2?a:Ef(a.constructor,Of(c,d,!0)));return a}}
function Of(a,b,c){var d=c||b&2?ef:df,e=!!(b&32);a=Jf(a,b,function(f){return Nf(f,e,d)});
Xe(a,32|(c?2:0));return a}
function Pf(a){var b=a.A,c=bf(b);return c&2?Ef(a.constructor,Of(b,c,!1)):a}
;Object.freeze({});function Qf(a,b){a=a.A;return Rf(a,bf(a),b)}
function Rf(a,b,c,d){if(-1===c)return null;if(c>=ff(b)){if(b&256)return a[a.length-1][c]}else{var e=a.length;if(d&&b&256&&(d=a[e-1][c],null!=d))return d;b=c+(+!!(b&512)-1);if(b<e)return a[b]}}
function G(a,b,c){var d=a.A,e=bf(d);nf(e);Sf(d,e,b,c);return a}
function Sf(a,b,c,d,e){hf(d);var f=ff(b);if(c>=f||e){e=b;if(b&256)f=a[a.length-1];else{if(null==d)return e;f=a[f+(+!!(b&512)-1)]={};e|=256}f[c]=d;e!==b&&$e(a,e);return e}a[c+(+!!(b&512)-1)]=d;b&256&&(a=a[a.length-1],c in a&&delete a[c]);return b}
function Tf(a){return void 0!==Uf(a,Vf,11,!1)}
function Wf(a,b,c,d){var e=a.A,f=bf(e);nf(f);if(null==c)return Sf(e,f,b),a;var g=Ze(c),h=g,k=!!(2&g)||Object.isFrozen(c),l=!k&&!1;if(!(4&g))for(g=21,k&&(c=Ve(c),h=0,g=Xf(g,f,!0)),k=0;k<c.length;k++)c[k]=d(c[k]);l&&(g=af(g,2,!0));g!==h&&$e(c,g);l&&Object.freeze(c);Sf(e,f,b,c);return a}
function Yf(a,b,c,d){a=a.A;var e=bf(a);nf(e);for(var f=e,g=0,h=0;h<c.length;h++){var k=c[h];null!=Rf(a,f,k)&&(0!==g&&(f=Sf(a,f,g)),g=k)}(c=g)&&c!==b&&null!=d&&(e=Sf(a,e,c));Sf(a,e,b,d)}
function Uf(a,b,c,d){a=a.A;var e=bf(a),f=Rf(a,e,c,d);b=Cf(f,b,e);b!==f&&null!=b&&Sf(a,e,c,b,d);return b}
function Zf(a,b,c,d){d=void 0===d?!1:d;b=Uf(a,b,c,d);if(null==b)return b;a=a.A;var e=bf(a);if(!(e&2)){var f=Pf(b);f!==b&&(b=f,Sf(a,e,c,b,d))}return b}
function $f(a,b,c,d){null!=d?Bf(d,b):d=void 0;return G(a,c,d)}
function ag(a,b,c,d){var e=a.A,f=bf(e);nf(f);if(null==d)return Sf(e,f,c),a;for(var g=Ze(d),h=g,k=!!(2&g)||!!(2048&g),l=k||Object.isFrozen(d),n=!l&&!1,p=!0,t=!0,r=0;r<d.length;r++){var x=d[r];Bf(x,b);k||(x=!!(Ze(x.A)&2),p&&(p=!x),t&&(t=x))}k||(g=af(g,5,!0),g=af(g,8,p),g=af(g,16,t),n&&(g=af(g,t?2:2048,!0)),g!==h&&(l&&(d=Ve(d),g=Xf(g,f,!0)),$e(d,g)),n&&Object.freeze(d));Sf(e,f,c,d);return a}
function Xf(a,b,c){a=af(a,2,!!(2&b));a=af(a,32,!!(32&b)&&c);return a=af(a,2048,!1)}
function bg(a,b){a=Qf(a,b);var c;null==a?c=a:tf(a)?"number"===typeof a?c=yf(a):c=xf(a):c=void 0;return c}
function cg(a){a=Qf(a,1);a=null==a?a:tf(a)?"string"===typeof a?xf(a):yf(a):void 0;return a}
function dg(a){return kf(a,!1)}
function eg(a,b,c){null!=c&&(Number.isFinite(c)||of());return G(a,b,c)}
;function fg(a,b,c){this.A=Ff(a,b,c)}
m=fg.prototype;m.toJSON=function(){if(jf)var a=gg(this,this.A,!1);else a=Lf(this.A,Mf,void 0,void 0,!1,!1),a=gg(this,a,!0);return a};
m.serialize=function(){jf=!0;try{return JSON.stringify(this.toJSON(),Hf)}finally{jf=!1}};
function hg(a,b){if(null==b||""==b)return new a;b=JSON.parse(b);if(!Array.isArray(b))throw Error(void 0);Xe(b,32);return Ef(a,b)}
m.clone=function(){var a=this.A,b=bf(a);return Ef(this.constructor,Of(a,b,!1))};
m.Jc=gf;m.toString=function(){return gg(this,this.A,!1).toString()};
function gg(a,b,c){var d=a.constructor.Ua,e=bf(c?a.A:b),f=ff(e);e=!1;if(d){if(!c){b=Ve(b);var g;if(b.length&&hf(g=b[b.length-1]))for(e=0;e<d.length;e++)if(d[e]>=f){Object.assign(b[b.length-1]={},g);break}e=!0}g=b;c=!c;f=bf(a.A);a=ff(f);f=+!!(f&512)-1;for(var h,k,l=0;l<d.length;l++)if(k=d[l],k<a){k+=f;var n=g[k];null==n?g[k]=c?lf:cf():c&&n!==lf&&Ye(n)}else h||(n=void 0,g.length&&hf(n=g[g.length-1])?h=n:g.push(h={})),n=h[k],null==h[k]?h[k]=c?lf:cf():c&&n!==lf&&Ye(n)}d=b.length;if(!d)return b;var p;
if(hf(h=b[d-1])){a:{var t=h;g={};c=!1;for(var r in t)a=t[r],Array.isArray(a)&&a!=a&&(c=!0),null!=a?g[r]=a:c=!0;if(c){for(var x in g){t=g;break a}t=null}}t!=h&&(p=!0);d--}for(;0<d;d--){h=b[d-1];if(null!=h)break;var y=!0}if(!p&&!y)return b;var z;e?z=b:z=Array.prototype.slice.call(b,0,d);b=z;e&&(b.length=d);t&&b.push(t);return b}
;function ig(a){this.A=Ff(a)}
w(ig,fg);var jg=[1,2,3];function kg(a){this.A=Ff(a)}
w(kg,fg);var lg=[1,2,3];function mg(a){this.A=Ff(a)}
w(mg,fg);mg.Ua=[1];function ng(a){this.A=Ff(a)}
w(ng,fg);ng.Ua=[3,6,4];function og(a){this.A=Ff(a)}
w(og,fg);og.Ua=[1];function pg(a){if(!a)return"";if(/^about:(?:blank|srcdoc)$/.test(a))return window.origin||"";a.startsWith("blob:")&&(a=a.substring(5));a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));c=a.substring(0,a.indexOf("://"));if(!c)throw Error("URI is missing protocol: "+a);if("http"!==c&&"https"!==c&&"chrome-extension"!==
c&&"moz-extension"!==c&&"file"!==c&&"android-app"!==c&&"chrome-search"!==c&&"chrome-untrusted"!==c&&"chrome"!==c&&"app"!==c&&"devtools"!==c)throw Error("Invalid URI scheme in origin: "+c);a="";var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===c&&"80"!==e||"https"===c&&"443"!==e)a=":"+e}return c+"://"+b+a}
;function qg(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;n=l=0}
function b(p){for(var t=g,r=0;64>r;r+=4)t[r/4]=p[r]<<24|p[r+1]<<16|p[r+2]<<8|p[r+3];for(r=16;80>r;r++)p=t[r-3]^t[r-8]^t[r-14]^t[r-16],t[r]=(p<<1|p>>>31)&4294967295;p=e[0];var x=e[1],y=e[2],z=e[3],H=e[4];for(r=0;80>r;r++){if(40>r)if(20>r){var L=z^x&(y^z);var I=1518500249}else L=x^y^z,I=1859775393;else 60>r?(L=x&y|z&(x|y),I=2400959708):(L=x^y^z,I=3395469782);L=((p<<5|p>>>27)&4294967295)+L+H+I+t[r]&4294967295;H=z;z=y;y=(x<<30|x>>>2)&4294967295;x=p;p=L}e[0]=e[0]+p&4294967295;e[1]=e[1]+x&4294967295;e[2]=
e[2]+y&4294967295;e[3]=e[3]+z&4294967295;e[4]=e[4]+H&4294967295}
function c(p,t){if("string"===typeof p){p=unescape(encodeURIComponent(p));for(var r=[],x=0,y=p.length;x<y;++x)r.push(p.charCodeAt(x));p=r}t||(t=p.length);r=0;if(0==l)for(;r+64<t;)b(p.slice(r,r+64)),r+=64,n+=64;for(;r<t;)if(f[l++]=p[r++],n++,64==l)for(l=0,b(f);r+64<t;)b(p.slice(r,r+64)),r+=64,n+=64}
function d(){var p=[],t=8*n;56>l?c(h,56-l):c(h,64-(l-56));for(var r=63;56<=r;r--)f[r]=t&255,t>>>=8;b(f);for(r=t=0;5>r;r++)for(var x=24;0<=x;x-=8)p[t++]=e[r]>>x&255;return p}
for(var e=[],f=[],g=[],h=[128],k=1;64>k;++k)h[k]=0;var l,n;a();return{reset:a,update:c,digest:d,Vd:function(){for(var p=d(),t="",r=0;r<p.length;r++)t+="0123456789ABCDEF".charAt(Math.floor(p[r]/16))+"0123456789ABCDEF".charAt(p[r]%16);return t}}}
;function rg(a,b,c){var d=String(B.location.href);return d&&a&&b?[b,sg(pg(d),a,c||null)].join(" "):null}
function sg(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],eb(d,function(h){e.push(h)}),tg(e.join(" "));
var f=[],g=[];eb(c,function(h){g.push(h.key);f.push(h.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];eb(d,function(h){e.push(h)});
a=tg(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function tg(a){var b=qg();b.update(a);return b.Vd().toLowerCase()}
;var ug={};function vg(a){this.h=a||{cookie:""}}
m=vg.prototype;m.isEnabled=function(){if(!B.navigator.cookieEnabled)return!1;if(!this.Mb())return!0;this.set("TESTCOOKIESENABLED","1",{hc:60});if("1"!==this.get("TESTCOOKIESENABLED"))return!1;this.remove("TESTCOOKIESENABLED");return!0};
m.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.eg;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var h=c.hc}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===h&&(h=-1);c=f?";domain="+f:"";g=g?";path="+g:"";d=d?";secure":"";h=0>h?"":0==h?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(Date.now()+1E3*h)).toUTCString();this.h.cookie=a+"="+b+c+g+h+d+(null!=e?";samesite="+
e:"")};
m.get=function(a,b){for(var c=a+"=",d=(this.h.cookie||"").split(";"),e=0,f;e<d.length;e++){f=Hb(d[e]);if(0==f.lastIndexOf(c,0))return f.slice(c.length);if(f==a)return""}return b};
m.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{hc:0,path:b,domain:c});return d};
m.Cc=function(){return wg(this).keys};
m.Mb=function(){return!this.h.cookie};
m.clear=function(){for(var a=wg(this).keys,b=a.length-1;0<=b;b--)this.remove(a[b])};
function wg(a){a=(a.h.cookie||"").split(";");for(var b=[],c=[],d,e,f=0;f<a.length;f++)e=Hb(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));return{keys:b,values:c}}
var xg=new vg("undefined"==typeof document?null:document);function yg(a){return!!ug.FPA_SAMESITE_PHASE2_MOD||!(void 0===a||!a)}
function zg(a){a=void 0===a?!1:a;var b=B.__SAPISID||B.__APISID||B.__3PSAPISID||B.__OVERRIDE_SID;yg(a)&&(b=b||B.__1PSAPISID);if(b)return!0;if("undefined"!==typeof document){var c=new vg(document);b=c.get("SAPISID")||c.get("APISID")||c.get("__Secure-3PAPISID")||c.get("SID")||c.get("OSID");yg(a)&&(b=b||c.get("__Secure-1PAPISID"))}return!!b}
function Ag(a,b,c,d){(a=B[a])||"undefined"===typeof document||(a=(new vg(document)).get(b));return a?rg(a,c,d):null}
function Bg(a,b){b=void 0===b?!1:b;var c=pg(String(B.location.href)),d=[];if(zg(b)){c=0==c.indexOf("https:")||0==c.indexOf("chrome-extension:")||0==c.indexOf("moz-extension:");var e=c?B.__SAPISID:B.__APISID;e||"undefined"===typeof document||(e=new vg(document),e=e.get(c?"SAPISID":"APISID")||e.get("__Secure-3PAPISID"));(e=e?rg(e,c?"SAPISIDHASH":"APISIDHASH",a):null)&&d.push(e);c&&yg(b)&&((b=Ag("__1PSAPISID","__Secure-1PAPISID","SAPISID1PHASH",a))&&d.push(b),(a=Ag("__3PSAPISID","__Secure-3PAPISID",
"SAPISID3PHASH",a))&&d.push(a))}return 0==d.length?null:d.join(" ")}
;function Cg(a){this.A=Ff(a)}
w(Cg,fg);Cg.Ua=[2];function Dg(a){zd.call(this);this.intervalMs=a;this.enabled=!1;this.i=function(){return Wa()};
this.j=this.i()}
w(Dg,zd);Dg.prototype.setInterval=function(a){this.intervalMs=a;this.timer&&this.enabled?(this.stop(),this.start()):this.timer&&this.stop()};
Dg.prototype.start=function(){var a=this;this.enabled=!0;this.timer||(this.timer=setTimeout(function(){a.tick()},this.intervalMs),this.j=this.i())};
Dg.prototype.stop=function(){this.enabled=!1;this.timer&&(clearTimeout(this.timer),this.timer=void 0)};
Dg.prototype.tick=function(){var a=this;if(this.enabled){var b=Math.max(this.i()-this.j,0);b<.8*this.intervalMs?this.timer=setTimeout(function(){a.tick()},this.intervalMs-b):(this.timer&&(clearTimeout(this.timer),this.timer=void 0),Ad(this,"tick"),this.enabled&&(this.stop(),this.start()))}else this.timer=void 0};function Eg(a){this.A=Ff(a)}
w(Eg,fg);function Fg(a){this.A=Ff(a)}
w(Fg,fg);function Gg(a){this.h=this.i=this.j=a}
Gg.prototype.reset=function(){this.h=this.i=this.j};
Gg.prototype.getValue=function(){return this.i};function Hg(a){this.A=Ff(a)}
w(Hg,fg);function Ig(a){this.A=Ff(a)}
w(Ig,fg);Ig.Ua=[1];function Vf(a){this.A=Ff(a)}
w(Vf,fg);var Jg=["platform","platformVersion","architecture","model","uaFullVersion"];new Ig;function Kg(a){this.A=Ff(a)}
w(Kg,fg);function Lg(a){this.A=Ff(a)}
w(Lg,fg);function Mg(a){this.A=Ff(a,34)}
w(Mg,fg);Mg.Ua=[3,20,27];function Ng(a){this.A=Ff(a,19)}
w(Ng,fg);Ng.prototype.Sb=function(a){return eg(this,2,a)};
Ng.Ua=[3,5];function Og(a){this.A=Ff(a,6)}
w(Og,fg);var Pg=function(a){return function(b){return hg(a,b)}}(Og);
Og.Ua=[5];function Qg(a){this.A=Ff(a)}
w(Qg,fg);var Rg;Rg=new function(a,b,c){this.h=a;this.fieldName=b;this.ctor=c;this.isRepeated=0;this.i=Zf;this.defaultValue=void 0}(175237375,{Tf:0},Qg);function Sg(a){F.call(this);var b=this;this.componentId="";this.i=[];this.na="";this.Ba=this.ea=-1;this.ma=!1;this.B=this.experimentIds=null;this.Y=this.da=this.s=this.l=0;this.Ia=1;this.timeoutMillis=0;this.R=!1;this.logSource=a.logSource;this.sb=a.sb||function(){};
this.j=new Tg(a.logSource,a.wb);this.network=a.network;this.Db=a.Db||null;this.bufferSize=1E3;this.ob=Va(Ed,0,1);this.W=a.ff||null;this.sessionIndex=a.sessionIndex||null;this.Kb=a.Kb||!1;this.pageId=a.pageId||null;this.logger=null;this.withCredentials=!a.ed;this.wb=a.wb||!1;var c=eg(new Kg,1,1);Ug(this.j,c);this.m=new Gg(1E4);this.h=new Dg(this.m.getValue());a=Vg(this,a.Xc);od(this.h,"tick",a,!1,this);this.S=new Dg(6E5);od(this.S,"tick",a,!1,this);this.Kb||this.S.start();this.wb||(od(document,"visibilitychange",
function(){"hidden"===document.visibilityState&&b.xc()}),od(document,"pagehide",this.xc,!1,this))}
w(Sg,F);function Vg(a,b){return b?function(){b().then(function(){a.flush()})}:function(){a.flush()}}
m=Sg.prototype;m.M=function(){this.xc();this.h.stop();this.S.stop();F.prototype.M.call(this)};
function Wg(a){a.W||(a.W=.01>a.ob()?"https://www.google.com/log?format=json&hasfast=true":"https://play.google.com/log?format=json&hasfast=true");return a.W}
function Xg(a,b){a.m=new Gg(1>b?1:b);a.h.setInterval(a.m.getValue())}
m.log=function(a){a=a.clone();var b=this.Ia++;a=G(a,21,wf(b));this.componentId&&G(a,26,Af(this.componentId));cg(a)||(b=Date.now(),b=Number.isFinite(b)?b.toString():"0",G(a,1,wf(b)));null==bg(a,15)&&G(a,15,wf(60*(new Date).getTimezoneOffset()));this.experimentIds&&(b=this.experimentIds.clone(),$f(a,Cg,16,b));b=this.i.length-this.bufferSize+1;0<b&&(this.i.splice(0,b),this.l+=b);this.i.push(a);this.Kb||this.h.enabled||this.h.start()};
m.flush=function(a,b){var c=this;if(0===this.i.length)a&&a();else if(this.R)Yg(this.j,3),Zg(this);else{var d=Date.now();if(this.Ba>d&&this.ea<d)b&&b("throttled");else{Yg(this.j,1);var e=$g(this.j,this.i,this.l,this.s,this.Db,this.da,this.Y);d={};var f=this.sb();f&&(d.Authorization=f);var g=Wg(this);this.sessionIndex&&(d["X-Goog-AuthUser"]=this.sessionIndex,g=nc(g,"authuser",this.sessionIndex));this.pageId&&(d["X-Goog-PageId"]=this.pageId,g=nc(g,"pageId",this.pageId));if(f&&this.na===f)b&&b("stale-auth-token");
else{this.i=[];this.h.enabled&&this.h.stop();this.l=0;var h=e.serialize(),k;this.B&&this.B.isSupported(h.length)&&(k=this.B.compress(h));var l={url:g,body:h,Rd:1,Nc:d,requestType:"POST",withCredentials:this.withCredentials,timeoutMillis:this.timeoutMillis},n=function(r){c.m.reset();c.h.setInterval(c.m.getValue());if(r){var x=null;try{var y=JSON.stringify(JSON.parse(r.replace(")]}'\n","")));x=Pg(y)}catch(H){}if(x){r=Number;y="-1";y=void 0===y?"0":y;var z=cg(x);r=r(null!=z?z:y);0<r&&(c.ea=Date.now(),
c.Ba=c.ea+r);x=Rg.ctor?Rg.i(x,Rg.ctor,Rg.h,!0):Rg.i(x,Rg.h,null,!0);if(r=null===x?void 0:x)x=-1,x=void 0===x?0:x,r=vf(Qf(r,1)),x=null!=r?r:x,-1!==x&&(c.ma||Xg(c,x))}}a&&a();c.s=0},p=function(r,x){var y=void 0===y?2:y;
var z=e.A;var H=bf(z),L=!!(2&H),I=H;H=L?1:y;y=1===H;H=2===H;var da=!!(2&I)&&H,S=I;var O=S&2;I=Rf(z,S,3);Array.isArray(I)||(I=lf);var ba=!!(S&32);S=Ze(I);0===S&&ba&&!O?(S|=33,$e(I,S)):S&1||(S|=1,$e(I,S));O&&(O=!1,S&2||(Xe(I,34),O=!!(4&S)),O&&Object.freeze(I));O=I;I=bf(z);var J=Ze(O),ca=!!(2&J);S=!!(4&J);ba=!!(32&J);var ha=ca&&S||!!(2048&J);if(!S){var V=O,ab=I,Jc=!!(2&J);Jc&&(ab=af(ab,2,!0));for(var Kc=!Jc,Lc=!0,X=0,yi=0;X<V.length;X++){var zi=Cf(V[X],Mg,ab);if(zi instanceof Mg){if(!Jc){var Xm=!!(Ze(zi.A)&
2);Kc&&(Kc=!Xm);Lc&&(Lc=Xm)}V[yi++]=zi}}yi<X&&(V.length=yi);J=af(J,4,!0);J=af(J,16,Lc);J=af(J,8,Kc);$e(V,J);ca&&!da&&(Object.freeze(O),ha=!0)}da=J;ca=!!(8&J)||y&&!O.length;if(!L&&!ca){ha&&(O=Ve(O),ha=!1,da=0,J=Xf(J,I,!1),I=Sf(z,I,3,O));L=O;ca=J;for(V=0;V<L.length;V++)J=L[V],ab=Pf(J),J!==ab&&(L[V]=ab);ca=af(ca,8,!0);J=ca=af(ca,16,!L.length)}ha||(y?J=af(J,!O.length||16&J&&(!S||ba)?2:2048,!0):J=af(J,32,!1),J!==da&&$e(O,J),y&&(Object.freeze(O),ha=!0));H&&ha&&(O=Ve(O),J=Xf(J,I,!1),$e(O,J),Sf(z,I,3,O));
z=O;y=bg(e,14);H=c.m;H.h=Math.min(3E5,2*H.h);H.i=Math.min(3E5,H.h+Math.round(.2*(Math.random()-.5)*H.h));c.h.setInterval(c.m.getValue());401===r&&f&&(c.na=f);y&&(c.l+=y);void 0===x&&(x=c.isRetryable(r));x&&(c.i=z.concat(c.i),c.Kb||c.h.enabled||c.h.start());b&&b("net-send-failed",r);++c.s},t=function(){c.network&&c.network.send(l,n,p)};
k?k.then(function(r){l.Nc["Content-Encoding"]="gzip";l.Nc["Content-Type"]="application/binary";l.body=r;l.Rd=2;t()},function(){t()}):t()}}}};
m.xc=function(){ah(this.j,!0);this.flush();ah(this.j,!1)};
function Zg(a){bh(a,function(b,c){b=nc(b,"format","json");var d=!1;try{d=window.navigator.sendBeacon(b,c.serialize())}catch(e){}a.R&&!d&&(a.R=!1);return d})}
function bh(a,b){if(0!==a.i.length){var c=rc(Wg(a),"format");c=lc(c,"auth",a.sb(),"authuser",a.sessionIndex||"0");for(var d=0;10>d&&a.i.length;++d){var e=a.i.slice(0,32),f=$g(a.j,e,a.l,a.s,a.Db,a.da,a.Y);if(!b(c,f)){++a.s;break}a.l=0;a.s=0;a.da=0;a.Y=0;a.i=a.i.slice(e.length)}a.h.enabled&&a.h.stop()}}
m.isRetryable=function(a){return 500<=a&&600>a||401===a||0===a};
function Tg(a,b){this.wb=b=void 0===b?!1:b;this.uach=this.locale=null;this.h=new Ng;Number.isInteger(a)&&this.h.Sb(a);b||(this.locale=document.documentElement.getAttribute("lang"));Ug(this,new Kg)}
Tg.prototype.Sb=function(a){this.h.Sb(a);return this};
function Ug(a,b){$f(a.h,Kg,1,b);Qf(b,1)||eg(b,1,1);if(!a.wb){b=ch(a);var c=Qf(b,5);(null==c||"string"===typeof c)&&c||G(b,5,Af(a.locale))}a.uach&&(b=ch(a),Zf(b,Ig,9)||$f(b,Ig,9,a.uach))}
function Yg(a,b){Tf(dh(a))&&(a=eh(a),eg(a,1,b))}
function ah(a,b){Tf(dh(a))&&(a=eh(a),G(a,2,rf(b)))}
function dh(a){return Zf(a.h,Kg,1)}
function fh(a,b){var c=void 0===c?Jg:c;b(window,c).then(function(d){a.uach=d;d=ch(a);$f(d,Ig,9,a.uach);return!0}).catch(function(){return!1})}
function ch(a){a=dh(a);var b=Zf(a,Vf,11);b||(b=new Vf,$f(a,Vf,11,b));return b}
function eh(a){a=ch(a);var b=Zf(a,Hg,10);b||(b=new Hg,G(b,2,rf(!1)),$f(a,Hg,10,b));return b}
function $g(a,b,c,d,e,f,g){c=void 0===c?0:c;f=void 0===f?0:f;g=void 0===g?0:g;d=void 0===d?0:d;if(Tf(dh(a))){var h=eh(a);G(h,3,uf(d))}Tf(dh(a))&&(d=eh(a),G(d,4,uf(f)));Tf(dh(a))&&(f=eh(a),G(f,5,uf(g)));a=a.h.clone();g=Date.now().toString();a=G(a,4,wf(g));b=ag(a,Mg,3,b);e&&(a=new Eg,e=G(a,13,uf(e)),a=new Fg,e=$f(a,Eg,2,e),a=new Lg,e=$f(a,Fg,1,e),e=eg(e,2,9),$f(b,Lg,18,e));c&&G(b,14,wf(c));return b}
;function gh(){}
gh.prototype.serialize=function(a){var b=[];hh(this,a,b);return b.join("")};
function hh(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(Array.isArray(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),hh(a,d[f],c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");e="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(f=b[d],"function"!=typeof f&&(c.push(e),ih(d,c),c.push(":"),hh(a,f,c),e=","));c.push("}");return}}switch(typeof b){case "string":ih(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var jh={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\v":"\\u000b"},kh=/\uffff/.test("\uffff")?/[\\"\x00-\x1f\x7f-\uffff]/g:/[\\"\x00-\x1f\x7f-\xff]/g;function ih(a,b){b.push('"',a.replace(kh,function(c){var d=jh[c];d||(d="\\u"+(c.charCodeAt(0)|65536).toString(16).slice(1),jh[c]=d);return d}),'"')}
;function lh(){}
lh.prototype.h=null;lh.prototype.getOptions=function(){var a;(a=this.h)||(a={},mh(this)&&(a[0]=!0,a[1]=!0),a=this.h=a);return a};var nh;function oh(){}
Xa(oh,lh);function ph(a){return(a=mh(a))?new ActiveXObject(a):new XMLHttpRequest}
function mh(a){if(!a.i&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var b=["MSXML2.XMLHTTP.6.0","MSXML2.XMLHTTP.3.0","MSXML2.XMLHTTP","Microsoft.XMLHTTP"],c=0;c<b.length;c++){var d=b[c];try{return new ActiveXObject(d),a.i=d}catch(e){}}throw Error("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return a.i}
nh=new oh;function qh(a){zd.call(this);this.headers=new Map;this.S=a||null;this.i=!1;this.R=this.I=null;this.l=this.da="";this.j=this.Y=this.s=this.W=!1;this.m=0;this.B=null;this.Ba="";this.ma=this.na=!1}
Xa(qh,zd);var rh=/^https?$/i,sh=["POST","PUT"],th=[];function uh(a,b,c,d,e,f,g){var h=new qh;th.push(h);b&&h.listen("complete",b);h.h.add("ready",h.Td,!0,void 0,void 0);f&&(h.m=Math.max(0,f));g&&(h.na=g);h.send(a,c,d,e)}
m=qh.prototype;m.Td=function(){this.dispose();jb(th,this)};
m.send=function(a,b,c,d){if(this.I)throw Error("[goog.net.XhrIo] Object is active with another request="+this.da+"; newUri="+a);b=b?b.toUpperCase():"GET";this.da=a;this.l="";this.W=!1;this.i=!0;this.I=this.S?ph(this.S):ph(nh);this.R=this.S?this.S.getOptions():nh.getOptions();this.I.onreadystatechange=Ua(this.qd,this);try{this.getStatus(),this.Y=!0,this.I.open(b,String(a),!0),this.Y=!1}catch(g){this.getStatus();vh(this,g);return}a=c||"";c=new Map(this.headers);if(d)if(Object.getPrototypeOf(d)===Object.prototype)for(var e in d)c.set(e,
d[e]);else if("function"===typeof d.keys&&"function"===typeof d.get){e=v(d.keys());for(var f=e.next();!f.done;f=e.next())f=f.value,c.set(f,d.get(f))}else throw Error("Unknown input type for opt_headers: "+String(d));d=Array.from(c.keys()).find(function(g){return"content-type"==g.toLowerCase()});
e=B.FormData&&a instanceof B.FormData;!(0<=db(sh,b))||d||e||c.set("Content-Type","application/x-www-form-urlencoded;charset=utf-8");b=v(c);for(d=b.next();!d.done;d=b.next())c=v(d.value),d=c.next().value,c=c.next().value,this.I.setRequestHeader(d,c);this.Ba&&(this.I.responseType=this.Ba);"withCredentials"in this.I&&this.I.withCredentials!==this.na&&(this.I.withCredentials=this.na);try{wh(this),0<this.m&&(this.ma=xh(this.I),this.getStatus(),this.ma?(this.I.timeout=this.m,this.I.ontimeout=Ua(this.Ed,
this)):this.B=ne(this.Ed,this.m,this)),this.getStatus(),this.s=!0,this.I.send(a),this.s=!1}catch(g){this.getStatus(),vh(this,g)}};
function xh(a){return Oc&&"number"===typeof a.timeout&&void 0!==a.ontimeout}
m.Ed=function(){"undefined"!=typeof La&&this.I&&(this.l="Timed out after "+this.m+"ms, aborting",this.getStatus(),Ad(this,"timeout"),this.abort(8))};
function vh(a,b){a.i=!1;a.I&&(a.j=!0,a.I.abort(),a.j=!1);a.l=b;yh(a);zh(a)}
function yh(a){a.W||(a.W=!0,Ad(a,"complete"),Ad(a,"error"))}
m.abort=function(){this.I&&this.i&&(this.getStatus(),this.i=!1,this.j=!0,this.I.abort(),this.j=!1,Ad(this,"complete"),Ad(this,"abort"),zh(this))};
m.M=function(){this.I&&(this.i&&(this.i=!1,this.j=!0,this.I.abort(),this.j=!1),zh(this,!0));qh.Aa.M.call(this)};
m.qd=function(){this.Z()||(this.Y||this.s||this.j?Ah(this):this.Ae())};
m.Ae=function(){Ah(this)};
function Ah(a){if(a.i&&"undefined"!=typeof La)if(a.R[1]&&4==Bh(a)&&2==a.getStatus())a.getStatus();else if(a.s&&4==Bh(a))ne(a.qd,0,a);else if(Ad(a,"readystatechange"),a.isComplete()){a.getStatus();a.i=!1;try{if(Ch(a))Ad(a,"complete"),Ad(a,"success");else{try{var b=2<Bh(a)?a.I.statusText:""}catch(c){b=""}a.l=b+" ["+a.getStatus()+"]";yh(a)}}finally{zh(a)}}}
function zh(a,b){if(a.I){wh(a);var c=a.I,d=a.R[0]?function(){}:null;
a.I=null;a.R=null;b||Ad(a,"ready");try{c.onreadystatechange=d}catch(e){}}}
function wh(a){a.I&&a.ma&&(a.I.ontimeout=null);a.B&&(B.clearTimeout(a.B),a.B=null)}
m.isActive=function(){return!!this.I};
m.isComplete=function(){return 4==Bh(this)};
function Ch(a){var b=a.getStatus();a:switch(b){case 200:case 201:case 202:case 204:case 206:case 304:case 1223:var c=!0;break a;default:c=!1}if(!c){if(b=0===b)a=cc(1,String(a.da)),!a&&B.self&&B.self.location&&(a=B.self.location.protocol.slice(0,-1)),b=!rh.test(a?a.toLowerCase():"");c=b}return c}
function Bh(a){return a.I?a.I.readyState:0}
m.getStatus=function(){try{return 2<Bh(this)?this.I.status:-1}catch(a){return-1}};
m.getLastError=function(){return"string"===typeof this.l?this.l:String(this.l)};function Dh(){}
Dh.prototype.send=function(a,b,c){b=void 0===b?function(){}:b;
c=void 0===c?function(){}:c;
uh(a.url,function(d){d=d.target;if(Ch(d)){try{var e=d.I?d.I.responseText:""}catch(f){e=""}b(e)}else c(d.getStatus())},a.requestType,a.body,a.Nc,a.timeoutMillis,a.withCredentials)};function Eh(a,b){F.call(this);this.logSource=a;this.sessionIndex=b;this.i="https://play.google.com/log?format=json&hasfast=true";this.j=!1;this.componentId="";this.network=new Dh}
w(Eh,F);Eh.prototype.ed=function(){this.W=!0;return this};function Fh(a,b,c,d,e,f){a=void 0===a?-1:a;b=void 0===b?"":b;c=void 0===c?"":c;d=void 0===d?!1:d;e=void 0===e?"":e;F.call(this);this.logSource=a;this.componentId=b;f?a=f:(a=new Eh(a,"0"),a.componentId=b,yc(this,a),""!==c&&(a.i=c),d&&(a.j=!0),e&&(a.h=e),b=new Sg({logSource:a.logSource,sb:a.sb?a.sb:Bg,sessionIndex:a.sessionIndex,ff:a.i,wb:a.j,Kb:!1,ed:a.W,pageId:a.pageId,Xc:a.Xc,network:a.network?a.network:void 0}),yc(a,b),a.s&&Ug(b.j,a.s),a.h&&(c=a.h,d=ch(b.j),G(d,7,Af(c))),a.m&&(b.B=a.m),a.componentId&&
(b.componentId=a.componentId),a.Db&&(b.Db=a.Db),a.l&&((c=a.l)?(b.experimentIds||(b.experimentIds=new Cg),c=c.serialize(),G(b.experimentIds,4,Af(c))):b.experimentIds&&G(b.experimentIds,4)),a.R&&(c=a.R,b.experimentIds||(b.experimentIds=new Cg),Wf(b.experimentIds,2,c,dg)),a.B&&(c=a.B,b.ma=!0,Xg(b,c)),a.S&&fh(b.j,a.S),a.network.Sb&&a.network.Sb(a.logSource),a.network.Ue&&a.network.Ue(b),a=b);this.h=a}
w(Fh,F);
Fh.prototype.flush=function(a){var b=a||[];if(b.length){a=new og;for(var c=[],d=0;d<b.length;d++){var e=b[d];var f=new ng;f=G(f,1,Af(e.i));for(var g=[],h=0;h<e.h.length;h++)g.push(e.h[h].bb);f=Wf(f,3,g,zf);g=[];h=[];for(var k=v(e.qb.keys()),l=k.next();!l.done;l=k.next())h.push(l.value.split(","));for(k=0;k<h.length;k++){l=h[k];var n=e.l;for(var p=e.zc(l)||[],t=[],r=0;r<p.length;r++){var x=p[r],y=x&&x.h;x=new kg;switch(n){case 3:y=Number(y);Number.isFinite(y)&&Yf(x,1,lg,wf(y));break;case 2:y=Number(y);
if(null!=y&&"number"!==typeof y)throw Error("Value of float/double field must be a number, found "+typeof y+": "+y);Yf(x,2,lg,y)}t.push(x)}n=t;for(p=0;p<n.length;p++){t=n[p];r=new mg;t=$f(r,kg,2,t);r=l;x=[];y=[];for(var z=0;z<e.h.length;z++)y.push(e.h[z].cb);for(z=0;z<y.length;z++){var H=y[z],L=r[z],I=new ig;switch(H){case 3:Yf(I,1,jg,Af(String(L)));break;case 2:H=Number(L);Number.isFinite(H)&&Yf(I,2,jg,uf(H));break;case 1:Yf(I,3,jg,rf("true"===L))}x.push(I)}ag(t,ig,1,x);g.push(t)}}ag(f,mg,4,g);c.push(f);
e.clear()}ag(a,ng,1,c);b=this.h;a instanceof Mg?b.log(a):(c=new Mg,a=a.serialize(),a=G(c,8,Af(a)),b.log(a));this.h.flush()}};function Gh(a,b){this.ga=b;this.l=void 0;this.s=new Fh(1828);this.i=new oe(this.s);this.B=new ue(this.i);this.m=new ve(this.i);this.G=new we(this.i);this.j=new se(this.i);this.h=ye(a)}
function Hh(){var a,b,c;return null!=(c=null==(a=globalThis.performance)?void 0:null==(b=a.now)?void 0:b.call(a))?c:Date.now()}
;function Ih(){var a=this;this.promise=new Promise(function(b,c){a.resolve=b;a.reject=c})}
;function Jh(a){function b(z,H){Promise.resolve().then(function(){var L;null!=(L=c.ra)&&void 0!==L.l&&L.B.record(Hh()-L.l,L.h,L.ga);h.resolve({Pd:z,Xe:H})})}
var c=this;this.h=!1;var d=a.program;var e=a.he;if(!1!==a.Ge){var f,g;this.ra=null!=(g=a.ra)?g:new Gh(e,null!=(f=a.Zf)?f:"default_client_key")}var h=new Ih;this.i=h.promise;if(!B[e]){var k;null!=(k=this.ra)&&te(k.j,k.h,1,"");var l;null!=(l=this.ra)&&l.i.nb()}else if(!B[e].a){var n;null!=(n=this.ra)&&te(n.j,n.h,2,"");var p;null!=(p=this.ra)&&p.i.nb()}try{var t=B[e].a,r;null!=(r=this.ra)&&(r.l=Hh());this.j=v(t(d,b,!0,a.lg)).next().value;this.We=h.promise.then(function(){})}catch(z){var x;
null!=(x=this.ra)&&te(x.j,x.h,4,z.message);var y;null!=(y=this.ra)&&y.i.nb();throw z;}}
Jh.prototype.snapshot=function(a){var b=this;if(this.h)throw Error("Already disposed");var c=Hh(),d;null!=(d=this.ra)&&d.m.h.sc("/client_streamz/bg/fsc",d.h);return this.i.then(function(e){var f=e.Pd;return new Promise(function(g){f(function(h){var k;null!=(k=b.ra)&&k.G.record(Hh()-c,k.h);g(h)},[a.dd,
a.Ye,a.hf])})})};
Jh.prototype.Bd=function(a){if(this.h)throw Error("Already disposed");var b=Hh(),c;null!=(c=this.ra)&&c.m.h.sc("/client_streamz/bg/fsc",c.h);a=this.j([a.dd,a.Ye,a.hf]);var d;null!=(d=this.ra)&&d.G.record(Hh()-b,d.h);return a};
Jh.prototype.dispose=function(){var a;null!=(a=this.ra)&&a.i.nb();this.h=!0;this.i.then(function(b){(b=b.Xe)&&b()})};
Jh.prototype.Z=function(){return this.h};var Kh=window;zb("csi.gstatic.com");zb("googleads.g.doubleclick.net");zb("partner.googleadservices.com");zb("pubads.g.doubleclick.net");zb("securepubads.g.doubleclick.net");zb("tpc.googlesyndication.com");/*

 SPDX-License-Identifier: Apache-2.0
*/
var Lh="function"===typeof URL;function Mh(a){if(a instanceof Ib)a instanceof Ib&&a.constructor===Ib?a=a.h:(Ma(a),a="type_error:SafeUrl");else{b:if(Lh){try{var b=new URL(a)}catch(c){b="https:";break b}b=b.protocol}else c:{b=document.createElement("a");try{b.href=a}catch(c){b=void 0;break c}b=b.protocol;b=":"===b||""===b?"https:":b}a="javascript:"!==b?a:void 0}return a}
;function Nh(a,b){b=Mh(b);void 0!==b&&(a.href=b)}
;var Oh={};function Ph(){}
function Qh(a){this.h=a}
w(Qh,Ph);Qh.prototype.toString=function(){return this.h};function Rh(a){var b="true".toString(),c=[new Qh(Sh[0].toLowerCase(),Oh)];if(0===c.length)throw Error("");if(c.map(function(d){if(d instanceof Qh)d=d.h;else throw Error("");return d}).every(function(d){return 0!=="data-loaded".indexOf(d)}))throw Error('Attribute "data-loaded" does not match any of the allowed prefixes.');
a.setAttribute("data-loaded",b)}
;function Th(){throw Error("unknown trace type");}
;var Uh="alternate author bookmark canonical cite help icon license next prefetch dns-prefetch prerender preconnect preload prev search subresource".split(" ");function Vh(a,b){if(b instanceof Db)a.href=Eb(b).toString();else{if(-1===Uh.indexOf("stylesheet"))throw Error('TrustedResourceUrl href attribute required with rel="stylesheet"');b=Mh(b);if(void 0===b)return;a.href=b}a.rel="stylesheet"}
;function Wh(a){var b,c,d=null==(c=(b=(a.ownerDocument&&a.ownerDocument.defaultView||window).document).querySelector)?void 0:c.call(b,"script[nonce]");(b=d?d.nonce||d.getAttribute("nonce")||"":"")&&a.setAttribute("nonce",b)}
function Xh(a,b){a.src=Eb(b);Wh(a)}
;var Yh=ka([""]),Zh=la(["\x00"],["\\0"]),$h=la(["\n"],["\\n"]),ai=la(["\x00"],["\\u0000"]);function bi(a){return-1===a.toString().indexOf("`")}
bi(function(a){return a(Yh)})||bi(function(a){return a(Zh)})||bi(function(a){return a($h)})||bi(function(a){return a(ai)});function ci(a){this.re=a}
function di(a){return new ci(function(b){return b.substr(0,a.length+1).toLowerCase()===a+":"})}
var ei=[di("data"),di("http"),di("https"),di("mailto"),di("ftp"),new ci(function(a){return/^[^:]*([/?#]|$)/.test(a)})];function fi(a){var b=gi;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a(b[c],c,b)}
function hi(){var a=[];fi(function(b){a.push(b)});
return a}
var gi={jf:"allow-forms",kf:"allow-modals",lf:"allow-orientation-lock",mf:"allow-pointer-lock",nf:"allow-popups",pf:"allow-popups-to-escape-sandbox",qf:"allow-presentation",rf:"allow-same-origin",sf:"allow-scripts",tf:"allow-top-navigation",uf:"allow-top-navigation-by-user-activation"},ii=cb(function(){return hi()});
function ji(){var a=ki(),b={};eb(ii(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
function ki(){var a=void 0===a?document:a;return a.createElement("iframe")}
;function li(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var mi=(new Date).getTime();"undefined"!==typeof TextDecoder&&new TextDecoder;var ni="undefined"!==typeof TextEncoder?new TextEncoder:null,oi=ni?function(a){return ni.encode(a)}:function(a){for(var b=[],c=0,d=0;d<a.length;d++){var e=a.charCodeAt(d);
128>e?b[c++]=e:(2048>e?b[c++]=e>>6|192:(55296==(e&64512)&&d+1<a.length&&56320==(a.charCodeAt(d+1)&64512)?(e=65536+((e&1023)<<10)+(a.charCodeAt(++d)&1023),b[c++]=e>>18|240,b[c++]=e>>12&63|128):b[c++]=e>>12|224,b[c++]=e>>6&63|128),b[c++]=e&63|128)}a=new Uint8Array(b.length);for(c=0;c<a.length;c++)a[c]=b[c];return a};function pi(a){zd.call(this);var b=this;this.s=this.j=0;this.Da=null!=a?a:{oa:function(e,f){return setTimeout(e,f)},
qa:function(e){clearTimeout(e)}};
var c,d;this.i=null!=(d=null==(c=window.navigator)?void 0:c.onLine)?d:!0;this.l=function(){return A(function(e){return e.yield(qi(b),0)})};
window.addEventListener("offline",this.l);window.addEventListener("online",this.l);this.s||ri(this)}
w(pi,zd);function si(){var a=ti;pi.h||(pi.h=new pi(a));return pi.h}
pi.prototype.dispose=function(){window.removeEventListener("offline",this.l);window.removeEventListener("online",this.l);this.Da.qa(this.s);delete pi.h};
pi.prototype.wa=function(){return this.i};
function ri(a){a.s=a.Da.oa(function(){var b;return A(function(c){if(1==c.h)return a.i?(null==(b=window.navigator)?0:b.onLine)?c.v(3):c.yield(qi(a),3):c.yield(qi(a),3);ri(a);c.h=0})},3E4)}
function qi(a,b){return a.m?a.m:a.m=new Promise(function(c){var d,e,f,g;return A(function(h){switch(h.h){case 1:return d=window.AbortController?new window.AbortController:void 0,f=null==(e=d)?void 0:e.signal,g=!1,za(h,2,3),d&&(a.j=a.Da.oa(function(){d.abort()},b||2E4)),h.yield(fetch("/generate_204",{method:"HEAD",
signal:f}),5);case 5:g=!0;case 3:h.B=[h.j];h.l=0;h.G=0;a.m=void 0;a.j&&(a.Da.qa(a.j),a.j=0);g!==a.i&&(a.i=g,a.i?Ad(a,"networkstatus-online"):Ad(a,"networkstatus-offline"));c(g);Ba(h);break;case 2:Aa(h),g=!1,h.v(3)}})})}
;function ui(){this.data=[];this.h=-1}
ui.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&Number.isInteger(a)&&this.data[a]!==b&&(this.data[a]=b,this.h=-1)};
ui.prototype.get=function(a){return!!this.data[a]};
function vi(a){-1===a.h&&(a.h=a.data.reduce(function(b,c,d){return b+(c?Math.pow(2,d):0)},0));
return a.h}
;function wi(a,b){this.h=a[B.Symbol.iterator]();this.i=b}
wi.prototype[Symbol.iterator]=function(){return this};
wi.prototype.next=function(){var a=this.h.next();return{value:a.done?void 0:this.i.call(void 0,a.value),done:a.done}};
function xi(a,b){return new wi(a,b)}
;function Ai(){this.blockSize=-1}
;function Bi(){this.blockSize=-1;this.blockSize=64;this.h=[];this.m=[];this.G=[];this.j=[];this.j[0]=128;for(var a=1;a<this.blockSize;++a)this.j[a]=0;this.l=this.i=0;this.reset()}
Xa(Bi,Ai);Bi.prototype.reset=function(){this.h[0]=1732584193;this.h[1]=4023233417;this.h[2]=2562383102;this.h[3]=271733878;this.h[4]=3285377520;this.l=this.i=0};
function Ci(a,b,c){c||(c=0);var d=a.G;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.h[0];c=a.h[1];var g=a.h[2],h=a.h[3],k=a.h[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=h^c&(g^h);var l=1518500249}else f=c^g^h,l=1859775393;else 60>e?(f=c&g|h&(c|g),l=2400959708):
(f=c^g^h,l=3395469782);f=(b<<5|b>>>27)+f+k+l+d[e]&4294967295;k=h;h=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.h[0]=a.h[0]+b&4294967295;a.h[1]=a.h[1]+c&4294967295;a.h[2]=a.h[2]+g&4294967295;a.h[3]=a.h[3]+h&4294967295;a.h[4]=a.h[4]+k&4294967295}
Bi.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.blockSize,d=0,e=this.m,f=this.i;d<b;){if(0==f)for(;d<=c;)Ci(this,a,d),d+=this.blockSize;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.blockSize){Ci(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.blockSize){Ci(this,e);f=0;break}}this.i=f;this.l+=b}};
Bi.prototype.digest=function(){var a=[],b=8*this.l;56>this.i?this.update(this.j,56-this.i):this.update(this.j,this.blockSize-(this.i-56));for(var c=this.blockSize-1;56<=c;c--)this.m[c]=b&255,b/=256;Ci(this,this.m);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.h[c]>>d&255,++b;return a};function Di(a){return"string"==typeof a.className?a.className:a.getAttribute&&a.getAttribute("class")||""}
function Ei(a,b){"string"==typeof a.className?a.className=b:a.setAttribute&&a.setAttribute("class",b)}
function Fi(a,b){a.classList?b=a.classList.contains(b):(a=a.classList?a.classList:Di(a).match(/\S+/g)||[],b=0<=db(a,b));return b}
function Gi(){var a=document.body;a.classList?a.classList.remove("inverted-hdpi"):Fi(a,"inverted-hdpi")&&Ei(a,Array.prototype.filter.call(a.classList?a.classList:Di(a).match(/\S+/g)||[],function(b){return"inverted-hdpi"!=b}).join(" "))}
;function Hi(){}
Hi.prototype.next=function(){return Ii};
var Ii={done:!0,value:void 0};function Ji(a){return{value:a,done:!1}}
Hi.prototype.Fa=function(){return this};function Ki(a){if(a instanceof Li||a instanceof Mi||a instanceof Ni)return a;if("function"==typeof a.next)return new Li(function(){return a});
if("function"==typeof a[Symbol.iterator])return new Li(function(){return a[Symbol.iterator]()});
if("function"==typeof a.Fa)return new Li(function(){return a.Fa()});
throw Error("Not an iterator or iterable.");}
function Li(a){this.i=a}
Li.prototype.Fa=function(){return new Mi(this.i())};
Li.prototype[Symbol.iterator]=function(){return new Ni(this.i())};
Li.prototype.h=function(){return new Ni(this.i())};
function Mi(a){this.i=a}
w(Mi,Hi);Mi.prototype.next=function(){return this.i.next()};
Mi.prototype[Symbol.iterator]=function(){return new Ni(this.i)};
Mi.prototype.h=function(){return new Ni(this.i)};
function Ni(a){Li.call(this,function(){return a});
this.j=a}
w(Ni,Li);Ni.prototype.next=function(){return this.j.next()};function Oi(a,b){this.i={};this.h=[];this.Wa=this.size=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Oi)for(c=a.Cc(),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
m=Oi.prototype;m.Cc=function(){Pi(this);return this.h.concat()};
m.has=function(a){return Qi(this.i,a)};
m.equals=function(a,b){if(this===a)return!0;if(this.size!=a.size)return!1;b=b||Ri;Pi(this);for(var c,d=0;c=this.h[d];d++)if(!b(this.get(c),a.get(c)))return!1;return!0};
function Ri(a,b){return a===b}
m.Mb=function(){return 0==this.size};
m.clear=function(){this.i={};this.Wa=this.size=this.h.length=0};
m.remove=function(a){return this.delete(a)};
m.delete=function(a){return Qi(this.i,a)?(delete this.i[a],--this.size,this.Wa++,this.h.length>2*this.size&&Pi(this),!0):!1};
function Pi(a){if(a.size!=a.h.length){for(var b=0,c=0;b<a.h.length;){var d=a.h[b];Qi(a.i,d)&&(a.h[c++]=d);b++}a.h.length=c}if(a.size!=a.h.length){var e={};for(c=b=0;b<a.h.length;)d=a.h[b],Qi(e,d)||(a.h[c++]=d,e[d]=1),b++;a.h.length=c}}
m.get=function(a,b){return Qi(this.i,a)?this.i[a]:b};
m.set=function(a,b){Qi(this.i,a)||(this.size+=1,this.h.push(a),this.Wa++);this.i[a]=b};
m.forEach=function(a,b){for(var c=this.Cc(),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
m.clone=function(){return new Oi(this)};
m.keys=function(){return Ki(this.Fa(!0)).h()};
m.values=function(){return Ki(this.Fa(!1)).h()};
m.entries=function(){var a=this;return xi(this.keys(),function(b){return[b,a.get(b)]})};
m.Fa=function(a){Pi(this);var b=0,c=this.Wa,d=this,e=new Hi;e.next=function(){if(c!=d.Wa)throw Error("The map has changed since the iterator was created");if(b>=d.h.length)return Ii;var f=d.h[b++];return Ji(a?f:d.i[f])};
return e};
function Qi(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
;function K(a){F.call(this);this.m=1;this.j=[];this.l=0;this.h=[];this.i={};this.s=!!a}
Xa(K,F);m=K.prototype;m.subscribe=function(a,b,c){var d=this.i[a];d||(d=this.i[a]=[]);var e=this.m;this.h[e]=a;this.h[e+1]=b;this.h[e+2]=c;this.m=e+3;d.push(e);return e};
m.unsubscribe=function(a,b,c){if(a=this.i[a]){var d=this.h;if(a=a.find(function(e){return d[e+1]==b&&d[e+2]==c}))return this.Fb(a)}return!1};
m.Fb=function(a){var b=this.h[a];if(b){var c=this.i[b];0!=this.l?(this.j.push(a),this.h[a+1]=function(){}):(c&&jb(c,a),delete this.h[a],delete this.h[a+1],delete this.h[a+2])}return!!b};
m.Ya=function(a,b){var c=this.i[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.s)for(e=0;e<c.length;e++){var g=c[e];Si(this.h[g+1],this.h[g+2],d)}else{this.l++;try{for(e=0,f=c.length;e<f&&!this.Z();e++)g=c[e],this.h[g+1].apply(this.h[g+2],d)}finally{if(this.l--,0<this.j.length&&0==this.l)for(;c=this.j.pop();)this.Fb(c)}}return 0!=e}return!1};
function Si(a,b,c){Td(function(){a.apply(b,c)})}
m.clear=function(a){if(a){var b=this.i[a];b&&(b.forEach(this.Fb,this),delete this.i[a])}else this.h.length=0,this.i={}};
m.M=function(){K.Aa.M.call(this);this.clear();this.j.length=0};function Ti(a){this.h=a}
Ti.prototype.set=function(a,b){void 0===b?this.h.remove(a):this.h.set(a,(new gh).serialize(b))};
Ti.prototype.get=function(a){try{var b=this.h.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
Ti.prototype.remove=function(a){this.h.remove(a)};function Ui(a){this.h=a}
Xa(Ui,Ti);function Vi(a){this.data=a}
function Wi(a){return void 0===a||a instanceof Vi?a:new Vi(a)}
Ui.prototype.set=function(a,b){Ui.Aa.set.call(this,a,Wi(b))};
Ui.prototype.i=function(a){a=Ui.Aa.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
Ui.prototype.get=function(a){if(a=this.i(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function Xi(a){this.h=a}
Xa(Xi,Ui);Xi.prototype.set=function(a,b,c){if(b=Wi(b)){if(c){if(c<Wa()){Xi.prototype.remove.call(this,a);return}b.expiration=c}b.creation=Wa()}Xi.Aa.set.call(this,a,b)};
Xi.prototype.i=function(a){var b=Xi.Aa.i.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<Wa()||c&&c>Wa())Xi.prototype.remove.call(this,a);else return b}};function Yi(){}
;function Zi(){}
Xa(Zi,Yi);Zi.prototype[Symbol.iterator]=function(){return Ki(this.Fa(!0)).h()};
Zi.prototype.clear=function(){var a=Array.from(this);a=v(a);for(var b=a.next();!b.done;b=a.next())this.remove(b.value)};function $i(a){this.h=a}
Xa($i,Zi);m=$i.prototype;m.isAvailable=function(){if(!this.h)return!1;try{return this.h.setItem("__sak","1"),this.h.removeItem("__sak"),!0}catch(a){return!1}};
m.set=function(a,b){try{this.h.setItem(a,b)}catch(c){if(0==this.h.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
m.get=function(a){a=this.h.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
m.remove=function(a){this.h.removeItem(a)};
m.Fa=function(a){var b=0,c=this.h,d=new Hi;d.next=function(){if(b>=c.length)return Ii;var e=c.key(b++);if(a)return Ji(e);e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Ji(e)};
return d};
m.clear=function(){this.h.clear()};
m.key=function(a){return this.h.key(a)};function aj(){var a=null;try{a=window.localStorage||null}catch(b){}this.h=a}
Xa(aj,$i);function bj(a,b){this.i=a;this.h=null;var c;if(c=Oc)c=!(9<=Number(bd));if(c){cj||(cj=new Oi);this.h=cj.get(a);this.h||(b?this.h=document.getElementById(b):(this.h=document.createElement("userdata"),this.h.addBehavior("#default#userData"),document.body.appendChild(this.h)),cj.set(a,this.h));try{this.h.load(this.i)}catch(d){this.h=null}}}
Xa(bj,Zi);var dj={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},cj=null;function ej(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return dj[b]})}
m=bj.prototype;m.isAvailable=function(){return!!this.h};
m.set=function(a,b){this.h.setAttribute(ej(a),b);fj(this)};
m.get=function(a){a=this.h.getAttribute(ej(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
m.remove=function(a){this.h.removeAttribute(ej(a));fj(this)};
m.Fa=function(a){var b=0,c=this.h.XMLDocument.documentElement.attributes,d=new Hi;d.next=function(){if(b>=c.length)return Ii;var e=c[b++];if(a)return Ji(decodeURIComponent(e.nodeName.replace(/\./g,"%")).slice(1));e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Ji(e)};
return d};
m.clear=function(){for(var a=this.h.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);fj(this)};
function fj(a){try{a.h.save(a.i)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function gj(a,b){this.i=a;this.h=b+"::"}
Xa(gj,Zi);gj.prototype.set=function(a,b){this.i.set(this.h+a,b)};
gj.prototype.get=function(a){return this.i.get(this.h+a)};
gj.prototype.remove=function(a){this.i.remove(this.h+a)};
gj.prototype.Fa=function(a){var b=this.i[Symbol.iterator](),c=this,d=new Hi;d.next=function(){var e=b.next();if(e.done)return e;for(e=e.value;e.slice(0,c.h.length)!=c.h;){e=b.next();if(e.done)return e;e=e.value}return Ji(a?e.slice(c.h.length):c.i.get(e))};
return d};/*

 (The MIT License)

 Copyright (C) 2014 by Vitaly Puzrin

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

 -----------------------------------------------------------------------------
 Ported from zlib, which is under the following license
 https://github.com/madler/zlib/blob/master/zlib.h

 zlib.h -- interface of the 'zlib' general purpose compression library
   version 1.2.8, April 28th, 2013
   Copyright (C) 1995-2013 Jean-loup Gailly and Mark Adler
   This software is provided 'as-is', without any express or implied
   warranty.  In no event will the authors be held liable for any damages
   arising from the use of this software.
   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:
   1. The origin of this software must not be misrepresented; you must not
      claim that you wrote the original software. If you use this software
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.
   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original software.
   3. This notice may not be removed or altered from any source distribution.
   Jean-loup Gailly        Mark Adler
   jloup@gzip.org          madler@alumni.caltech.edu
   The data format used by the zlib library is described by RFCs (Request for
   Comments) 1950 to 1952 in the files http://tools.ietf.org/html/rfc1950
   (zlib format), rfc1951 (deflate format) and rfc1952 (gzip format).
*/
var M={},hj="undefined"!==typeof Uint8Array&&"undefined"!==typeof Uint16Array&&"undefined"!==typeof Int32Array;M.assign=function(a){for(var b=Array.prototype.slice.call(arguments,1);b.length;){var c=b.shift();if(c){if("object"!==typeof c)throw new TypeError(c+"must be non-object");for(var d in c)Object.prototype.hasOwnProperty.call(c,d)&&(a[d]=c[d])}}return a};
M.Qc=function(a,b){if(a.length===b)return a;if(a.subarray)return a.subarray(0,b);a.length=b;return a};
var ij={pb:function(a,b,c,d,e){if(b.subarray&&a.subarray)a.set(b.subarray(c,c+d),e);else for(var f=0;f<d;f++)a[e+f]=b[c+f]},
hd:function(a){var b,c;var d=c=0;for(b=a.length;d<b;d++)c+=a[d].length;var e=new Uint8Array(c);d=c=0;for(b=a.length;d<b;d++){var f=a[d];e.set(f,c);c+=f.length}return e}},jj={pb:function(a,b,c,d,e){for(var f=0;f<d;f++)a[e+f]=b[c+f]},
hd:function(a){return[].concat.apply([],a)}};
M.Ve=function(){hj?(M.mb=Uint8Array,M.Ha=Uint16Array,M.Kd=Int32Array,M.assign(M,ij)):(M.mb=Array,M.Ha=Array,M.Kd=Array,M.assign(M,jj))};
M.Ve();var kj=!0;try{new Uint8Array(1)}catch(a){kj=!1}
function lj(a){var b,c,d=a.length,e=0;for(b=0;b<d;b++){var f=a.charCodeAt(b);if(55296===(f&64512)&&b+1<d){var g=a.charCodeAt(b+1);56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)}e+=128>f?1:2048>f?2:65536>f?3:4}var h=new M.mb(e);for(b=c=0;c<e;b++)f=a.charCodeAt(b),55296===(f&64512)&&b+1<d&&(g=a.charCodeAt(b+1),56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)),128>f?h[c++]=f:(2048>f?h[c++]=192|f>>>6:(65536>f?h[c++]=224|f>>>12:(h[c++]=240|f>>>18,h[c++]=128|f>>>12&63),h[c++]=128|f>>>
6&63),h[c++]=128|f&63);return h}
;var mj={};mj=function(a,b,c,d){var e=a&65535|0;a=a>>>16&65535|0;for(var f;0!==c;){f=2E3<c?2E3:c;c-=f;do e=e+b[d++]|0,a=a+e|0;while(--f);e%=65521;a%=65521}return e|a<<16|0};for(var nj={},oj,pj=[],qj=0;256>qj;qj++){oj=qj;for(var rj=0;8>rj;rj++)oj=oj&1?3988292384^oj>>>1:oj>>>1;pj[qj]=oj}nj=function(a,b,c,d){c=d+c;for(a^=-1;d<c;d++)a=a>>>8^pj[(a^b[d])&255];return a^-1};var sj={};sj={2:"need dictionary",1:"stream end",0:"","-1":"file error","-2":"stream error","-3":"data error","-4":"insufficient memory","-5":"buffer error","-6":"incompatible version"};function tj(a){for(var b=a.length;0<=--b;)a[b]=0}
var uj=[0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0],vj=[0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13],wj=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,7],xj=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15],yj=Array(576);tj(yj);var zj=Array(60);tj(zj);var Aj=Array(512);tj(Aj);var Bj=Array(256);tj(Bj);var Cj=Array(29);tj(Cj);var Dj=Array(30);tj(Dj);function Ej(a,b,c,d,e){this.Cd=a;this.be=b;this.ae=c;this.Wd=d;this.xe=e;this.ld=a&&a.length}
var Fj,Gj,Hj;function Ij(a,b){this.gd=a;this.Ab=0;this.Va=b}
function Jj(a,b){a.V[a.pending++]=b&255;a.V[a.pending++]=b>>>8&255}
function Kj(a,b,c){a.fa>16-c?(a.la|=b<<a.fa&65535,Jj(a,a.la),a.la=b>>16-a.fa,a.fa+=c-16):(a.la|=b<<a.fa&65535,a.fa+=c)}
function Lj(a,b,c){Kj(a,c[2*b],c[2*b+1])}
function Mj(a,b){var c=0;do c|=a&1,a>>>=1,c<<=1;while(0<--b);return c>>>1}
function Nj(a,b,c){var d=Array(16),e=0,f;for(f=1;15>=f;f++)d[f]=e=e+c[f-1]<<1;for(c=0;c<=b;c++)e=a[2*c+1],0!==e&&(a[2*c]=Mj(d[e]++,e))}
function Oj(a){var b;for(b=0;286>b;b++)a.sa[2*b]=0;for(b=0;30>b;b++)a.ab[2*b]=0;for(b=0;19>b;b++)a.ha[2*b]=0;a.sa[512]=1;a.Oa=a.Eb=0;a.ya=a.matches=0}
function Pj(a){8<a.fa?Jj(a,a.la):0<a.fa&&(a.V[a.pending++]=a.la);a.la=0;a.fa=0}
function Qj(a,b,c){Pj(a);Jj(a,c);Jj(a,~c);M.pb(a.V,a.window,b,c,a.pending);a.pending+=c}
function Rj(a,b,c,d){var e=2*b,f=2*c;return a[e]<a[f]||a[e]===a[f]&&d[b]<=d[c]}
function Sj(a,b,c){for(var d=a.X[c],e=c<<1;e<=a.Ma;){e<a.Ma&&Rj(b,a.X[e+1],a.X[e],a.depth)&&e++;if(Rj(b,d,a.X[e],a.depth))break;a.X[c]=a.X[e];c=e;e<<=1}a.X[c]=d}
function Tj(a,b,c){var d=0;if(0!==a.ya){do{var e=a.V[a.Jb+2*d]<<8|a.V[a.Jb+2*d+1];var f=a.V[a.Gc+d];d++;if(0===e)Lj(a,f,b);else{var g=Bj[f];Lj(a,g+256+1,b);var h=uj[g];0!==h&&(f-=Cj[g],Kj(a,f,h));e--;g=256>e?Aj[e]:Aj[256+(e>>>7)];Lj(a,g,c);h=vj[g];0!==h&&(e-=Dj[g],Kj(a,e,h))}}while(d<a.ya)}Lj(a,256,b)}
function Uj(a,b){var c=b.gd,d=b.Va.Cd,e=b.Va.ld,f=b.Va.Wd,g,h=-1;a.Ma=0;a.ub=573;for(g=0;g<f;g++)0!==c[2*g]?(a.X[++a.Ma]=h=g,a.depth[g]=0):c[2*g+1]=0;for(;2>a.Ma;){var k=a.X[++a.Ma]=2>h?++h:0;c[2*k]=1;a.depth[k]=0;a.Oa--;e&&(a.Eb-=d[2*k+1])}b.Ab=h;for(g=a.Ma>>1;1<=g;g--)Sj(a,c,g);k=f;do g=a.X[1],a.X[1]=a.X[a.Ma--],Sj(a,c,1),d=a.X[1],a.X[--a.ub]=g,a.X[--a.ub]=d,c[2*k]=c[2*g]+c[2*d],a.depth[k]=(a.depth[g]>=a.depth[d]?a.depth[g]:a.depth[d])+1,c[2*g+1]=c[2*d+1]=k,a.X[1]=k++,Sj(a,c,1);while(2<=a.Ma);a.X[--a.ub]=
a.X[1];g=b.gd;k=b.Ab;d=b.Va.Cd;e=b.Va.ld;f=b.Va.be;var l=b.Va.ae,n=b.Va.xe,p,t=0;for(p=0;15>=p;p++)a.Ja[p]=0;g[2*a.X[a.ub]+1]=0;for(b=a.ub+1;573>b;b++){var r=a.X[b];p=g[2*g[2*r+1]+1]+1;p>n&&(p=n,t++);g[2*r+1]=p;if(!(r>k)){a.Ja[p]++;var x=0;r>=l&&(x=f[r-l]);var y=g[2*r];a.Oa+=y*(p+x);e&&(a.Eb+=y*(d[2*r+1]+x))}}if(0!==t){do{for(p=n-1;0===a.Ja[p];)p--;a.Ja[p]--;a.Ja[p+1]+=2;a.Ja[n]--;t-=2}while(0<t);for(p=n;0!==p;p--)for(r=a.Ja[p];0!==r;)d=a.X[--b],d>k||(g[2*d+1]!==p&&(a.Oa+=(p-g[2*d+1])*g[2*d],g[2*
d+1]=p),r--)}Nj(c,h,a.Ja)}
function Vj(a,b,c){var d,e=-1,f=b[1],g=0,h=7,k=4;0===f&&(h=138,k=3);b[2*(c+1)+1]=65535;for(d=0;d<=c;d++){var l=f;f=b[2*(d+1)+1];++g<h&&l===f||(g<k?a.ha[2*l]+=g:0!==l?(l!==e&&a.ha[2*l]++,a.ha[32]++):10>=g?a.ha[34]++:a.ha[36]++,g=0,e=l,0===f?(h=138,k=3):l===f?(h=6,k=3):(h=7,k=4))}}
function Wj(a,b,c){var d,e=-1,f=b[1],g=0,h=7,k=4;0===f&&(h=138,k=3);for(d=0;d<=c;d++){var l=f;f=b[2*(d+1)+1];if(!(++g<h&&l===f)){if(g<k){do Lj(a,l,a.ha);while(0!==--g)}else 0!==l?(l!==e&&(Lj(a,l,a.ha),g--),Lj(a,16,a.ha),Kj(a,g-3,2)):10>=g?(Lj(a,17,a.ha),Kj(a,g-3,3)):(Lj(a,18,a.ha),Kj(a,g-11,7));g=0;e=l;0===f?(h=138,k=3):l===f?(h=6,k=3):(h=7,k=4)}}}
function Xj(a){var b=4093624447,c;for(c=0;31>=c;c++,b>>>=1)if(b&1&&0!==a.sa[2*c])return 0;if(0!==a.sa[18]||0!==a.sa[20]||0!==a.sa[26])return 1;for(c=32;256>c;c++)if(0!==a.sa[2*c])return 1;return 0}
var Yj=!1;function Zj(a,b,c){a.V[a.Jb+2*a.ya]=b>>>8&255;a.V[a.Jb+2*a.ya+1]=b&255;a.V[a.Gc+a.ya]=c&255;a.ya++;0===b?a.sa[2*c]++:(a.matches++,b--,a.sa[2*(Bj[c]+256+1)]++,a.ab[2*(256>b?Aj[b]:Aj[256+(b>>>7)])]++);return a.ya===a.Nb-1}
;function ak(a,b){a.msg=sj[b];return b}
function bk(a){for(var b=a.length;0<=--b;)a[b]=0}
function ck(a){var b=a.state,c=b.pending;c>a.K&&(c=a.K);0!==c&&(M.pb(a.output,b.V,b.Qb,c,a.Bb),a.Bb+=c,b.Qb+=c,a.Rc+=c,a.K-=c,b.pending-=c,0===b.pending&&(b.Qb=0))}
function dk(a,b){var c=0<=a.va?a.va:-1,d=a.o-a.va,e=0;if(0<a.level){2===a.H.wc&&(a.H.wc=Xj(a));Uj(a,a.fc);Uj(a,a.ac);Vj(a,a.sa,a.fc.Ab);Vj(a,a.ab,a.ac.Ab);Uj(a,a.Yc);for(e=18;3<=e&&0===a.ha[2*xj[e]+1];e--);a.Oa+=3*(e+1)+14;var f=a.Oa+3+7>>>3;var g=a.Eb+3+7>>>3;g<=f&&(f=g)}else f=g=d+5;if(d+4<=f&&-1!==c)Kj(a,b?1:0,3),Qj(a,c,d);else if(4===a.strategy||g===f)Kj(a,2+(b?1:0),3),Tj(a,yj,zj);else{Kj(a,4+(b?1:0),3);c=a.fc.Ab+1;d=a.ac.Ab+1;e+=1;Kj(a,c-257,5);Kj(a,d-1,5);Kj(a,e-4,4);for(f=0;f<e;f++)Kj(a,a.ha[2*
xj[f]+1],3);Wj(a,a.sa,c-1);Wj(a,a.ab,d-1);Tj(a,a.sa,a.ab)}Oj(a);b&&Pj(a);a.va=a.o;ck(a.H)}
function N(a,b){a.V[a.pending++]=b}
function ek(a,b){a.V[a.pending++]=b>>>8&255;a.V[a.pending++]=b&255}
function fk(a,b){var c=a.od,d=a.o,e=a.xa,f=a.pd,g=a.o>a.ja-262?a.o-(a.ja-262):0,h=a.window,k=a.Xa,l=a.Ga,n=a.o+258,p=h[d+e-1],t=h[d+e];a.xa>=a.kd&&(c>>=2);f>a.u&&(f=a.u);do{var r=b;if(h[r+e]===t&&h[r+e-1]===p&&h[r]===h[d]&&h[++r]===h[d+1]){d+=2;for(r++;h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&h[++d]===h[++r]&&d<n;);r=258-(n-d);d=n-258;if(r>e){a.zb=b;e=r;if(r>=f)break;p=h[d+e-1];t=h[d+e]}}}while((b=l[b&k])>g&&0!==--c);return e<=
a.u?e:a.u}
function gk(a){var b=a.ja,c;do{var d=a.Id-a.u-a.o;if(a.o>=b+(b-262)){M.pb(a.window,a.window,b,b,0);a.zb-=b;a.o-=b;a.va-=b;var e=c=a.ec;do{var f=a.head[--e];a.head[e]=f>=b?f-b:0}while(--c);e=c=b;do f=a.Ga[--e],a.Ga[e]=f>=b?f-b:0;while(--c);d+=b}if(0===a.H.ka)break;e=a.H;c=a.window;f=a.o+a.u;var g=e.ka;g>d&&(g=d);0===g?c=0:(e.ka-=g,M.pb(c,e.input,e.ib,g,f),1===e.state.wrap?e.F=mj(e.F,c,g,f):2===e.state.wrap&&(e.F=nj(e.F,c,g,f)),e.ib+=g,e.lb+=g,c=g);a.u+=c;if(3<=a.u+a.ta)for(d=a.o-a.ta,a.J=a.window[d],
a.J=(a.J<<a.La^a.window[d+1])&a.Ka;a.ta&&!(a.J=(a.J<<a.La^a.window[d+3-1])&a.Ka,a.Ga[d&a.Xa]=a.head[a.J],a.head[a.J]=d,d++,a.ta--,3>a.u+a.ta););}while(262>a.u&&0!==a.H.ka)}
function hk(a,b){for(var c;;){if(262>a.u){gk(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.J=(a.J<<a.La^a.window[a.o+3-1])&a.Ka,c=a.Ga[a.o&a.Xa]=a.head[a.J],a.head[a.J]=a.o);0!==c&&a.o-c<=a.ja-262&&(a.P=fk(a,c));if(3<=a.P)if(c=Zj(a,a.o-a.zb,a.P-3),a.u-=a.P,a.P<=a.Hc&&3<=a.u){a.P--;do a.o++,a.J=(a.J<<a.La^a.window[a.o+3-1])&a.Ka,a.Ga[a.o&a.Xa]=a.head[a.J],a.head[a.J]=a.o;while(0!==--a.P);a.o++}else a.o+=a.P,a.P=0,a.J=a.window[a.o],a.J=(a.J<<a.La^a.window[a.o+1])&a.Ka;else c=Zj(a,0,
a.window[a.o]),a.u--,a.o++;if(c&&(dk(a,!1),0===a.H.K))return 1}a.ta=2>a.o?a.o:2;return 4===b?(dk(a,!0),0===a.H.K?3:4):a.ya&&(dk(a,!1),0===a.H.K)?1:2}
function ik(a,b){for(var c,d;;){if(262>a.u){gk(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.J=(a.J<<a.La^a.window[a.o+3-1])&a.Ka,c=a.Ga[a.o&a.Xa]=a.head[a.J],a.head[a.J]=a.o);a.xa=a.P;a.sd=a.zb;a.P=2;0!==c&&a.xa<a.Hc&&a.o-c<=a.ja-262&&(a.P=fk(a,c),5>=a.P&&(1===a.strategy||3===a.P&&4096<a.o-a.zb)&&(a.P=2));if(3<=a.xa&&a.P<=a.xa){d=a.o+a.u-3;c=Zj(a,a.o-1-a.sd,a.xa-3);a.u-=a.xa-1;a.xa-=2;do++a.o<=d&&(a.J=(a.J<<a.La^a.window[a.o+3-1])&a.Ka,a.Ga[a.o&a.Xa]=a.head[a.J],a.head[a.J]=a.o);
while(0!==--a.xa);a.gb=0;a.P=2;a.o++;if(c&&(dk(a,!1),0===a.H.K))return 1}else if(a.gb){if((c=Zj(a,0,a.window[a.o-1]))&&dk(a,!1),a.o++,a.u--,0===a.H.K)return 1}else a.gb=1,a.o++,a.u--}a.gb&&(Zj(a,0,a.window[a.o-1]),a.gb=0);a.ta=2>a.o?a.o:2;return 4===b?(dk(a,!0),0===a.H.K?3:4):a.ya&&(dk(a,!1),0===a.H.K)?1:2}
function jk(a,b){for(var c,d,e,f=a.window;;){if(258>=a.u){gk(a);if(258>=a.u&&0===b)return 1;if(0===a.u)break}a.P=0;if(3<=a.u&&0<a.o&&(d=a.o-1,c=f[d],c===f[++d]&&c===f[++d]&&c===f[++d])){for(e=a.o+258;c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&d<e;);a.P=258-(e-d);a.P>a.u&&(a.P=a.u)}3<=a.P?(c=Zj(a,1,a.P-3),a.u-=a.P,a.o+=a.P,a.P=0):(c=Zj(a,0,a.window[a.o]),a.u--,a.o++);if(c&&(dk(a,!1),0===a.H.K))return 1}a.ta=0;return 4===b?(dk(a,!0),0===a.H.K?3:4):
a.ya&&(dk(a,!1),0===a.H.K)?1:2}
function kk(a,b){for(var c;;){if(0===a.u&&(gk(a),0===a.u)){if(0===b)return 1;break}a.P=0;c=Zj(a,0,a.window[a.o]);a.u--;a.o++;if(c&&(dk(a,!1),0===a.H.K))return 1}a.ta=0;return 4===b?(dk(a,!0),0===a.H.K?3:4):a.ya&&(dk(a,!1),0===a.H.K)?1:2}
function lk(a,b,c,d,e){this.je=a;this.we=b;this.ze=c;this.ue=d;this.de=e}
var mk;mk=[new lk(0,0,0,0,function(a,b){var c=65535;for(c>a.za-5&&(c=a.za-5);;){if(1>=a.u){gk(a);if(0===a.u&&0===b)return 1;if(0===a.u)break}a.o+=a.u;a.u=0;var d=a.va+c;if(0===a.o||a.o>=d)if(a.u=a.o-d,a.o=d,dk(a,!1),0===a.H.K)return 1;if(a.o-a.va>=a.ja-262&&(dk(a,!1),0===a.H.K))return 1}a.ta=0;if(4===b)return dk(a,!0),0===a.H.K?3:4;a.o>a.va&&dk(a,!1);return 1}),
new lk(4,4,8,4,hk),new lk(4,5,16,8,hk),new lk(4,6,32,32,hk),new lk(4,4,16,16,ik),new lk(8,16,32,32,ik),new lk(8,16,128,128,ik),new lk(8,32,128,256,ik),new lk(32,128,258,1024,ik),new lk(32,258,258,4096,ik)];
function nk(){this.H=null;this.status=0;this.V=null;this.wrap=this.pending=this.Qb=this.za=0;this.D=null;this.Ca=0;this.method=8;this.xb=-1;this.Xa=this.Tc=this.ja=0;this.window=null;this.Id=0;this.head=this.Ga=null;this.pd=this.kd=this.strategy=this.level=this.Hc=this.od=this.xa=this.u=this.zb=this.o=this.gb=this.sd=this.P=this.va=this.La=this.Ka=this.Dc=this.ec=this.J=0;this.sa=new M.Ha(1146);this.ab=new M.Ha(122);this.ha=new M.Ha(78);bk(this.sa);bk(this.ab);bk(this.ha);this.Yc=this.ac=this.fc=
null;this.Ja=new M.Ha(16);this.X=new M.Ha(573);bk(this.X);this.ub=this.Ma=0;this.depth=new M.Ha(573);bk(this.depth);this.fa=this.la=this.ta=this.matches=this.Eb=this.Oa=this.Jb=this.ya=this.Nb=this.Gc=0}
function ok(a,b){if(!a||!a.state||5<b||0>b)return a?ak(a,-2):-2;var c=a.state;if(!a.output||!a.input&&0!==a.ka||666===c.status&&4!==b)return ak(a,0===a.K?-5:-2);c.H=a;var d=c.xb;c.xb=b;if(42===c.status)if(2===c.wrap)a.F=0,N(c,31),N(c,139),N(c,8),c.D?(N(c,(c.D.text?1:0)+(c.D.Ra?2:0)+(c.D.Qa?4:0)+(c.D.name?8:0)+(c.D.comment?16:0)),N(c,c.D.time&255),N(c,c.D.time>>8&255),N(c,c.D.time>>16&255),N(c,c.D.time>>24&255),N(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),N(c,c.D.os&255),c.D.Qa&&c.D.Qa.length&&
(N(c,c.D.Qa.length&255),N(c,c.D.Qa.length>>8&255)),c.D.Ra&&(a.F=nj(a.F,c.V,c.pending,0)),c.Ca=0,c.status=69):(N(c,0),N(c,0),N(c,0),N(c,0),N(c,0),N(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),N(c,3),c.status=113);else{var e=8+(c.Tc-8<<4)<<8;e|=(2<=c.strategy||2>c.level?0:6>c.level?1:6===c.level?2:3)<<6;0!==c.o&&(e|=32);c.status=113;ek(c,e+(31-e%31));0!==c.o&&(ek(c,a.F>>>16),ek(c,a.F&65535));a.F=1}if(69===c.status)if(c.D.Qa){for(e=c.pending;c.Ca<(c.D.Qa.length&65535)&&(c.pending!==c.za||(c.D.Ra&&
c.pending>e&&(a.F=nj(a.F,c.V,c.pending-e,e)),ck(a),e=c.pending,c.pending!==c.za));)N(c,c.D.Qa[c.Ca]&255),c.Ca++;c.D.Ra&&c.pending>e&&(a.F=nj(a.F,c.V,c.pending-e,e));c.Ca===c.D.Qa.length&&(c.Ca=0,c.status=73)}else c.status=73;if(73===c.status)if(c.D.name){e=c.pending;do{if(c.pending===c.za&&(c.D.Ra&&c.pending>e&&(a.F=nj(a.F,c.V,c.pending-e,e)),ck(a),e=c.pending,c.pending===c.za)){var f=1;break}f=c.Ca<c.D.name.length?c.D.name.charCodeAt(c.Ca++)&255:0;N(c,f)}while(0!==f);c.D.Ra&&c.pending>e&&(a.F=nj(a.F,
c.V,c.pending-e,e));0===f&&(c.Ca=0,c.status=91)}else c.status=91;if(91===c.status)if(c.D.comment){e=c.pending;do{if(c.pending===c.za&&(c.D.Ra&&c.pending>e&&(a.F=nj(a.F,c.V,c.pending-e,e)),ck(a),e=c.pending,c.pending===c.za)){f=1;break}f=c.Ca<c.D.comment.length?c.D.comment.charCodeAt(c.Ca++)&255:0;N(c,f)}while(0!==f);c.D.Ra&&c.pending>e&&(a.F=nj(a.F,c.V,c.pending-e,e));0===f&&(c.status=103)}else c.status=103;103===c.status&&(c.D.Ra?(c.pending+2>c.za&&ck(a),c.pending+2<=c.za&&(N(c,a.F&255),N(c,a.F>>
8&255),a.F=0,c.status=113)):c.status=113);if(0!==c.pending){if(ck(a),0===a.K)return c.xb=-1,0}else if(0===a.ka&&(b<<1)-(4<b?9:0)<=(d<<1)-(4<d?9:0)&&4!==b)return ak(a,-5);if(666===c.status&&0!==a.ka)return ak(a,-5);if(0!==a.ka||0!==c.u||0!==b&&666!==c.status){d=2===c.strategy?kk(c,b):3===c.strategy?jk(c,b):mk[c.level].de(c,b);if(3===d||4===d)c.status=666;if(1===d||3===d)return 0===a.K&&(c.xb=-1),0;if(2===d&&(1===b?(Kj(c,2,3),Lj(c,256,yj),16===c.fa?(Jj(c,c.la),c.la=0,c.fa=0):8<=c.fa&&(c.V[c.pending++]=
c.la&255,c.la>>=8,c.fa-=8)):5!==b&&(Kj(c,0,3),Qj(c,0,0),3===b&&(bk(c.head),0===c.u&&(c.o=0,c.va=0,c.ta=0))),ck(a),0===a.K))return c.xb=-1,0}if(4!==b)return 0;if(0>=c.wrap)return 1;2===c.wrap?(N(c,a.F&255),N(c,a.F>>8&255),N(c,a.F>>16&255),N(c,a.F>>24&255),N(c,a.lb&255),N(c,a.lb>>8&255),N(c,a.lb>>16&255),N(c,a.lb>>24&255)):(ek(c,a.F>>>16),ek(c,a.F&65535));ck(a);0<c.wrap&&(c.wrap=-c.wrap);return 0!==c.pending?0:1}
;var pk={};pk=function(){this.input=null;this.lb=this.ka=this.ib=0;this.output=null;this.Rc=this.K=this.Bb=0;this.msg="";this.state=null;this.wc=2;this.F=0};var qk=Object.prototype.toString;
function rk(a){if(!(this instanceof rk))return new rk(a);a=this.options=M.assign({level:-1,method:8,chunkSize:16384,windowBits:15,memLevel:8,strategy:0,to:""},a||{});a.raw&&0<a.windowBits?a.windowBits=-a.windowBits:a.gzip&&0<a.windowBits&&16>a.windowBits&&(a.windowBits+=16);this.err=0;this.msg="";this.ended=!1;this.chunks=[];this.H=new pk;this.H.K=0;var b=this.H;var c=a.level,d=a.method,e=a.windowBits,f=a.memLevel,g=a.strategy;if(b){var h=1;-1===c&&(c=6);0>e?(h=0,e=-e):15<e&&(h=2,e-=16);if(1>f||9<
f||8!==d||8>e||15<e||0>c||9<c||0>g||4<g)b=ak(b,-2);else{8===e&&(e=9);var k=new nk;b.state=k;k.H=b;k.wrap=h;k.D=null;k.Tc=e;k.ja=1<<k.Tc;k.Xa=k.ja-1;k.Dc=f+7;k.ec=1<<k.Dc;k.Ka=k.ec-1;k.La=~~((k.Dc+3-1)/3);k.window=new M.mb(2*k.ja);k.head=new M.Ha(k.ec);k.Ga=new M.Ha(k.ja);k.Nb=1<<f+6;k.za=4*k.Nb;k.V=new M.mb(k.za);k.Jb=1*k.Nb;k.Gc=3*k.Nb;k.level=c;k.strategy=g;k.method=d;if(b&&b.state){b.lb=b.Rc=0;b.wc=2;c=b.state;c.pending=0;c.Qb=0;0>c.wrap&&(c.wrap=-c.wrap);c.status=c.wrap?42:113;b.F=2===c.wrap?
0:1;c.xb=0;if(!Yj){d=Array(16);for(f=g=0;28>f;f++)for(Cj[f]=g,e=0;e<1<<uj[f];e++)Bj[g++]=f;Bj[g-1]=f;for(f=g=0;16>f;f++)for(Dj[f]=g,e=0;e<1<<vj[f];e++)Aj[g++]=f;for(g>>=7;30>f;f++)for(Dj[f]=g<<7,e=0;e<1<<vj[f]-7;e++)Aj[256+g++]=f;for(e=0;15>=e;e++)d[e]=0;for(e=0;143>=e;)yj[2*e+1]=8,e++,d[8]++;for(;255>=e;)yj[2*e+1]=9,e++,d[9]++;for(;279>=e;)yj[2*e+1]=7,e++,d[7]++;for(;287>=e;)yj[2*e+1]=8,e++,d[8]++;Nj(yj,287,d);for(e=0;30>e;e++)zj[2*e+1]=5,zj[2*e]=Mj(e,5);Fj=new Ej(yj,uj,257,286,15);Gj=new Ej(zj,
vj,0,30,15);Hj=new Ej([],wj,0,19,7);Yj=!0}c.fc=new Ij(c.sa,Fj);c.ac=new Ij(c.ab,Gj);c.Yc=new Ij(c.ha,Hj);c.la=0;c.fa=0;Oj(c);c=0}else c=ak(b,-2);0===c&&(b=b.state,b.Id=2*b.ja,bk(b.head),b.Hc=mk[b.level].we,b.kd=mk[b.level].je,b.pd=mk[b.level].ze,b.od=mk[b.level].ue,b.o=0,b.va=0,b.u=0,b.ta=0,b.P=b.xa=2,b.gb=0,b.J=0);b=c}}else b=-2;if(0!==b)throw Error(sj[b]);a.header&&(b=this.H)&&b.state&&2===b.state.wrap&&(b.state.D=a.header);if(a.dictionary){var l;"string"===typeof a.dictionary?l=lj(a.dictionary):
"[object ArrayBuffer]"===qk.call(a.dictionary)?l=new Uint8Array(a.dictionary):l=a.dictionary;a=this.H;f=l;g=f.length;if(a&&a.state)if(l=a.state,b=l.wrap,2===b||1===b&&42!==l.status||l.u)b=-2;else{1===b&&(a.F=mj(a.F,f,g,0));l.wrap=0;g>=l.ja&&(0===b&&(bk(l.head),l.o=0,l.va=0,l.ta=0),c=new M.mb(l.ja),M.pb(c,f,g-l.ja,l.ja,0),f=c,g=l.ja);c=a.ka;d=a.ib;e=a.input;a.ka=g;a.ib=0;a.input=f;for(gk(l);3<=l.u;){f=l.o;g=l.u-2;do l.J=(l.J<<l.La^l.window[f+3-1])&l.Ka,l.Ga[f&l.Xa]=l.head[l.J],l.head[l.J]=f,f++;while(--g);
l.o=f;l.u=2;gk(l)}l.o+=l.u;l.va=l.o;l.ta=l.u;l.u=0;l.P=l.xa=2;l.gb=0;a.ib=d;a.input=e;a.ka=c;l.wrap=b;b=0}else b=-2;if(0!==b)throw Error(sj[b]);this.Lf=!0}}
rk.prototype.push=function(a,b){var c=this.H,d=this.options.chunkSize;if(this.ended)return!1;var e=b===~~b?b:!0===b?4:0;"string"===typeof a?c.input=lj(a):"[object ArrayBuffer]"===qk.call(a)?c.input=new Uint8Array(a):c.input=a;c.ib=0;c.ka=c.input.length;do{0===c.K&&(c.output=new M.mb(d),c.Bb=0,c.K=d);a=ok(c,e);if(1!==a&&0!==a)return sk(this,a),this.ended=!0,!1;if(0===c.K||0===c.ka&&(4===e||2===e))if("string"===this.options.to){var f=M.Qc(c.output,c.Bb);b=f;f=f.length;if(65537>f&&(b.subarray&&kj||!b.subarray))b=
String.fromCharCode.apply(null,M.Qc(b,f));else{for(var g="",h=0;h<f;h++)g+=String.fromCharCode(b[h]);b=g}this.chunks.push(b)}else b=M.Qc(c.output,c.Bb),this.chunks.push(b)}while((0<c.ka||0===c.K)&&1!==a);if(4===e)return(c=this.H)&&c.state?(d=c.state.status,42!==d&&69!==d&&73!==d&&91!==d&&103!==d&&113!==d&&666!==d?a=ak(c,-2):(c.state=null,a=113===d?ak(c,-3):0)):a=-2,sk(this,a),this.ended=!0,0===a;2===e&&(sk(this,0),c.K=0);return!0};
function sk(a,b){0===b&&(a.result="string"===a.options.to?a.chunks.join(""):M.hd(a.chunks));a.chunks=[];a.err=b;a.msg=a.H.msg}
function tk(a,b){b=b||{};b.gzip=!0;b=new rk(b);b.push(a,!0);if(b.err)throw b.msg||sj[b.err];return b.result}
;function uk(a){return Gb(null===a?"null":void 0===a?"undefined":a)}
;function vk(a){this.name=a}
;var wk=new vk("rawColdConfigGroup");var xk=new vk("rawHotConfigGroup");function yk(a){this.A=Ff(a)}
w(yk,fg);var zk=new vk("continuationCommand");var Ak=new vk("webCommandMetadata");var Bk=new vk("signalServiceEndpoint");var Ck={zf:"EMBEDDED_PLAYER_MODE_UNKNOWN",wf:"EMBEDDED_PLAYER_MODE_DEFAULT",yf:"EMBEDDED_PLAYER_MODE_PFP",xf:"EMBEDDED_PLAYER_MODE_PFL"};var Dk=new vk("feedbackEndpoint");function Ek(a){this.A=Ff(a)}
w(Ek,fg);var Fk=new vk("webPlayerShareEntityServiceEndpoint");var Gk=new vk("playlistEditEndpoint");var Hk=new vk("modifyChannelNotificationPreferenceEndpoint");var Ik=new vk("unsubscribeEndpoint");var Jk=new vk("subscribeEndpoint");function Kk(){var a=Lk;D("yt.ads.biscotti.getId_")||C("yt.ads.biscotti.getId_",a)}
function Mk(a){C("yt.ads.biscotti.lastId_",a)}
;function Nk(a,b){1<b.length?a[b[0]]=b[1]:1===b.length&&Object.assign(a,b[0])}
;var Ok=B.window,Pk,Qk,Rk=(null==Ok?void 0:null==(Pk=Ok.yt)?void 0:Pk.config_)||(null==Ok?void 0:null==(Qk=Ok.ytcfg)?void 0:Qk.data_)||{};C("yt.config_",Rk);function Sk(){Nk(Rk,arguments)}
function P(a,b){return a in Rk?Rk[a]:b}
function Tk(a){var b=Rk.EXPERIMENT_FLAGS;return b?b[a]:void 0}
;var Uk=[];function Vk(a){Uk.forEach(function(b){return b(a)})}
function Wk(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){Xk(b)}}:a}
function Xk(a){var b=D("yt.logging.errors.log");b?b(a,"ERROR",void 0,void 0,void 0,void 0,void 0):(b=P("ERRORS",[]),b.push([a,"ERROR",void 0,void 0,void 0,void 0,void 0]),Sk("ERRORS",b));Vk(a)}
function Yk(a,b,c,d,e){var f=D("yt.logging.errors.log");f?f(a,"WARNING",b,c,d,void 0,e):(f=P("ERRORS",[]),f.push([a,"WARNING",b,c,d,void 0,e]),Sk("ERRORS",f))}
;var Zk=/^[\w.]*$/,$k={q:!0,search_query:!0};function al(a,b){b=a.split(b);for(var c={},d=0,e=b.length;d<e;d++){var f=b[d].split("=");if(1==f.length&&f[0]||2==f.length)try{var g=bl(f[0]||""),h=bl(f[1]||"");g in c?Array.isArray(c[g])?kb(c[g],h):c[g]=[c[g],h]:c[g]=h}catch(p){var k=p,l=f[0],n=String(al);k.args=[{key:l,value:f[1],query:a,method:cl==n?"unchanged":n}];$k.hasOwnProperty(l)||Yk(k)}}return c}
var cl=String(al);function dl(a){var b=[];lb(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];eb(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function el(a){"?"==a.charAt(0)&&(a=a.substr(1));return al(a,"&")}
function fl(a){return-1!=a.indexOf("?")?(a=(a||"").split("#")[0],a=a.split("?",2),el(1<a.length?a[1]:a[0])):{}}
function gl(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=el(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);return mc(a,e)+d}
function hl(a){if(!b)var b=window.location.href;var c=cc(1,a),d=dc(a);c&&d?(a=a.match(ac),b=b.match(ac),a=a[3]==b[3]&&a[1]==b[1]&&a[4]==b[4]):a=d?dc(b)==d&&(Number(cc(4,b))||null)==(Number(cc(4,a))||null):!0;return a}
function bl(a){return a&&a.match(Zk)?a:decodeURIComponent(a.replace(/\+/g," "))}
;function il(a){var b=jl;a=void 0===a?D("yt.ads.biscotti.lastId_")||"":a;var c=Object,d=c.assign,e={};e.dt=mi;e.flash="0";a:{try{var f=b.h.top.location.href}catch(V){f=2;break a}f=f?f===b.i.location.href?0:1:2}e=(e.frm=f,e);try{e.u_tz=-(new Date).getTimezoneOffset();var g=void 0===g?Kh:g;try{var h=g.history.length}catch(V){h=0}e.u_his=h;var k;e.u_h=null==(k=Kh.screen)?void 0:k.height;var l;e.u_w=null==(l=Kh.screen)?void 0:l.width;var n;e.u_ah=null==(n=Kh.screen)?void 0:n.availHeight;var p;e.u_aw=null==
(p=Kh.screen)?void 0:p.availWidth;var t;e.u_cd=null==(t=Kh.screen)?void 0:t.colorDepth}catch(V){}h=b.h;try{var r=h.screenX;var x=h.screenY}catch(V){}try{var y=h.outerWidth;var z=h.outerHeight}catch(V){}try{var H=h.innerWidth;var L=h.innerHeight}catch(V){}try{var I=h.screenLeft;var da=h.screenTop}catch(V){}try{H=h.innerWidth,L=h.innerHeight}catch(V){}try{var S=h.screen.availWidth;var O=h.screen.availTop}catch(V){}r=[I,da,r,x,S,O,y,z,H,L];try{var ba=(b.h.top||window).document,J="CSS1Compat"==ba.compatMode?
ba.documentElement:ba.body;var ca=(new Gd(J.clientWidth,J.clientHeight)).round()}catch(V){ca=new Gd(-12245933,-12245933)}ba=ca;ca={};var ha=void 0===ha?B:ha;J=new ui;"SVGElement"in ha&&"createElementNS"in ha.document&&J.set(0);x=ji();x["allow-top-navigation-by-user-activation"]&&J.set(1);x["allow-popups-to-escape-sandbox"]&&J.set(2);ha.crypto&&ha.crypto.subtle&&J.set(3);"TextDecoder"in ha&&"TextEncoder"in ha&&J.set(4);ha=vi(J);ca.bc=ha;ca.bih=ba.height;ca.biw=ba.width;ca.brdim=r.join();b=b.i;b=(ca.vis=
b.prerendering?3:{visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[b.visibilityState||b.webkitVisibilityState||b.mozVisibilityState||""]||0,ca.wgl=!!Kh.WebGLRenderingContext,ca);c=d.call(c,e,b);c.ca_type="image";a&&(c.bid=a);return c}
var jl=new function(){var a=window.document;this.h=window;this.i=a};
C("yt.ads_.signals_.getAdSignalsString",function(a){return dl(il(a))});Wa();navigator.userAgent.indexOf(" (CrKey ");function R(a){a=kl(a);return"string"===typeof a&&"false"===a?!1:!!a}
function ll(a,b){a=kl(a);return void 0===a&&void 0!==b?b:Number(a||0)}
function kl(a){return P("EXPERIMENT_FLAGS",{})[a]}
function ml(){for(var a=[],b=P("EXPERIMENTS_FORCED_FLAGS",{}),c=v(Object.keys(b)),d=c.next();!d.done;d=c.next())d=d.value,a.push({key:d,value:String(b[d])});c=P("EXPERIMENT_FLAGS",{});var e=v(Object.keys(c));for(d=e.next();!d.done;d=e.next())d=d.value,d.startsWith("force_")&&void 0===b[d]&&a.push({key:d,value:String(c[d])});return a}
;var nl="XMLHttpRequest"in B?function(){return new XMLHttpRequest}:null;
function ol(){if(!nl)return null;var a=nl();return"open"in a?a:null}
function pl(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function ql(a,b){"function"===typeof a&&(a=Wk(a));return window.setTimeout(a,b)}
;var rl="client_dev_domain client_dev_expflag client_dev_regex_map client_dev_root_url client_rollout_override expflag forcedCapability jsfeat jsmode mods".split(" ");[].concat(ma(rl),["client_dev_set_cookie"]);var sl={Authorization:"AUTHORIZATION","X-Goog-EOM-Visitor-Id":"EOM_VISITOR_DATA","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-Youtube-Domain-Admin-State":"DOMAIN_ADMIN_STATE","X-Youtube-Chrome-Connected":"CHROME_CONNECTED_HEADER","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Delegation-Context":"INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL",
"X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM","X-Goog-AuthUser":"SESSION_INDEX","X-Goog-PageId":"DELEGATED_SESSION_ID"},tl="app debugcss debugjs expflag force_ad_params force_ad_encrypted force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address".split(" ").concat(ma(rl)),ul=!1;
function vl(a,b){b=void 0===b?{}:b;var c=hl(a),d=R("web_ajax_ignore_global_headers_if_set"),e;for(e in sl){var f=P(sl[e]),g="X-Goog-AuthUser"===e||"X-Goog-PageId"===e;"X-Goog-Visitor-Id"!==e||f||(f=P("VISITOR_DATA"));!f||!c&&dc(a)||d&&void 0!==b[e]||"TVHTML5_UNPLUGGED"===P("INNERTUBE_CLIENT_NAME")&&g||(b[e]=f)}c&&P("SESSION_INDEX")&&"TVHTML5_UNPLUGGED"!==P("INNERTUBE_CLIENT_NAME")&&(b["X-Yt-Auth-Test"]="test");c&&P("WEBVIEW_EOM",!1)&&(b["X-Yt-Webview-Eom"]="1");"X-Goog-EOM-Visitor-Id"in b&&"X-Goog-Visitor-Id"in
b&&delete b["X-Goog-Visitor-Id"];if(c||!dc(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());if(c||!dc(a)){try{var h=(new Intl.DateTimeFormat).resolvedOptions().timeZone}catch(k){}h&&(b["X-YouTube-Time-Zone"]=h)}document.location.hostname.endsWith("youtubeeducation.com")||!c&&dc(a)||(b["X-YouTube-Ad-Signals"]=dl(il()));return b}
function wl(a){var b=window.location.search,c=dc(a);R("debug_handle_relative_url_for_query_forward_killswitch")||!c&&hl(a)&&(c=document.location.hostname);var d=bc(cc(5,a));d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=el(b),f={};eb(tl,function(g){e[g]&&(f[g]=e[g])});
return gl(a,f||{},!1)}
function xl(a,b){var c=b.format||"JSON";a=yl(a,b);var d=zl(a,b),e=!1,f=Al(a,function(k){if(!e){e=!0;h&&window.clearTimeout(h);var l=pl(k),n=null,p=400<=k.status&&500>k.status,t=500<=k.status&&600>k.status;if(l||p||t)n=Bl(a,c,k,b.convertToSafeHtml);if(l)a:if(k&&204==k.status)l=!0;else{switch(c){case "XML":l=0==parseInt(n&&n.return_code,10);break a;case "RAW":l=!0;break a}l=!!n}n=n||{};p=b.context||B;l?b.onSuccess&&b.onSuccess.call(p,k,n):b.onError&&b.onError.call(p,k,n);b.onFinish&&b.onFinish.call(p,
k,n)}},b.method,d,b.headers,b.responseType,b.withCredentials);
d=b.timeout||0;if(b.onTimeout&&0<d){var g=b.onTimeout;var h=ql(function(){e||(e=!0,f.abort(),window.clearTimeout(h),g.call(b.context||B,f))},d)}return f}
function yl(a,b){b.includeDomain&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=P("XSRF_FIELD_NAME");if(b=b.urlParams)b[c]&&delete b[c],a=gl(a,b||{},!0);return a}
function zl(a,b){var c=P("XSRF_FIELD_NAME"),d=P("XSRF_TOKEN"),e=b.postBody||"",f=b.postParams,g=P("XSRF_FIELD_NAME"),h;b.headers&&(h=b.headers["Content-Type"]);b.excludeXsrf||dc(a)&&!b.withCredentials&&dc(a)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.postParams&&b.postParams[g]||(f||(f={}),f[c]=d);(R("ajax_parse_query_data_only_when_filled")&&f&&0<Object.keys(f).length||f)&&"string"===typeof e&&(e=el(e),vb(e,f),e=b.postBodyFormat&&"JSON"==b.postBodyFormat?
JSON.stringify(e):kc(e));f=e||f&&!ob(f);!ul&&f&&"POST"!=b.method&&(ul=!0,Xk(Error("AJAX request with postData should use POST")));return e}
function Bl(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,Yk(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(")]}'\n"===f.substring(0,5)&&(f=f.substring(5)),e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?Cl(a):null)e={},eb(a.getElementsByTagName("*"),function(g){e[g.tagName]=Dl(g)})}d&&El(e);
return e}
function El(a){if(Oa(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d=a[b],e=xb();d=e?e.createHTML(d):d;a[c]=new Xb(d)}else El(a[b])}}
function Cl(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function Dl(a){var b="";eb(a.childNodes,function(c){b+=c.nodeValue});
return b}
function Fl(a,b){b.method="POST";b.postParams||(b.postParams={});return xl(a,b)}
function Al(a,b,c,d,e,f,g,h){function k(){4==(l&&"readyState"in l?l.readyState:0)&&b&&Wk(b)(l)}
c=void 0===c?"GET":c;d=void 0===d?"":d;h=void 0===h?!1:h;var l=ol();if(!l)return null;"onloadend"in l?l.addEventListener("loadend",k,!1):l.onreadystatechange=k;R("debug_forward_web_query_parameters")&&(a=wl(a));l.open(c,a,!0);f&&(l.responseType=f);g&&(l.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=vl(a,e))for(var n in e)l.setRequestHeader(n,e[n]),"content-type"==n.toLowerCase()&&(c=!1);c&&l.setRequestHeader("Content-Type","application/x-www-form-urlencoded");
h&&"setAttributionReporting"in XMLHttpRequest.prototype&&l.setAttributionReporting({eventSourceEligible:!0,triggerEligible:!1});l.send(d);return l}
;var Gl=[{Ic:function(a){return"Cannot read property '"+a.key+"'"},
lc:{Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}],TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,
groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]},{regexp:/(null) is not an object \(evaluating '(?:([^.]+)\.)?([^']+)'\)/,groups:["value","base","key"]}]}},{Ic:function(a){return"Cannot call '"+a.key+"'"},
lc:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/([^ ]+) called on (null or undefined)/,groups:["key","value"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,
groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,groups:["key"]}]}},{Ic:function(a){return a.key+" is not defined"},
lc:{ReferenceError:[{regexp:/(.*) is not defined/,groups:["key"]},{regexp:/Can't find variable: (.*)/,groups:["key"]}]}}];var Il={Ta:[],Pa:[{callback:Hl,weight:500}]};function Hl(a){if("JavaException"===a.name)return!0;a=a.stack;return a.includes("chrome://")||a.includes("chrome-extension://")||a.includes("moz-extension://")}
;function Jl(){this.Pa=[];this.Ta=[]}
var Kl;function Ll(){if(!Kl){var a=Kl=new Jl;a.Ta.length=0;a.Pa.length=0;Il.Ta&&a.Ta.push.apply(a.Ta,Il.Ta);Il.Pa&&a.Pa.push.apply(a.Pa,Il.Pa)}return Kl}
;var Ml=new K;function Nl(a){function b(){return a.charCodeAt(d++)}
var c=a.length,d=0;do{var e=Ol(b);if(Infinity===e)break;var f=e>>3;switch(e&7){case 0:e=Ol(b);if(2===f)return e;break;case 1:if(2===f)return;d+=8;break;case 2:e=Ol(b);if(2===f)return a.substr(d,e);d+=e;break;case 5:if(2===f)return;d+=4;break;default:return}}while(d<c)}
function Ol(a){var b=a(),c=b&127;if(128>b)return c;b=a();c|=(b&127)<<7;if(128>b)return c;b=a();c|=(b&127)<<14;if(128>b)return c;b=a();return 128>b?c|(b&127)<<21:Infinity}
;function Pl(a,b,c,d){if(a)if(Array.isArray(a)){var e=d;for(d=0;d<a.length&&!(a[d]&&(e+=Ql(d,a[d],b,c),500<e));d++);d=e}else if("object"===typeof a)for(e in a){if(a[e]){var f=e;var g=a[e],h=b,k=c;f="string"!==typeof g||"clickTrackingParams"!==f&&"trackingParams"!==f?0:(g=Nl(atob(g.replace(/-/g,"+").replace(/_/g,"/"))))?Ql(f+".ve",g,h,k):0;d+=f;d+=Ql(e,a[e],b,c);if(500<d)break}}else c[b]=Rl(a),d+=c[b].length;else c[b]=Rl(a),d+=c[b].length;return d}
function Ql(a,b,c,d){c+="."+a;a=Rl(b);d[c]=a;return c.length+a.length}
function Rl(a){try{return("string"===typeof a?a:String(JSON.stringify(a))).substr(0,500)}catch(b){return"unable to serialize "+typeof a+" ("+b.message+")"}}
;function Sl(){this.Ze=!0}
function Tl(){Sl.h||(Sl.h=new Sl);return Sl.h}
function Ul(a,b){a={};var c=Bg([]);c&&(a.Authorization=c,c=b=null==b?void 0:b.sessionIndex,void 0===c&&(c=Number(P("SESSION_INDEX",0)),c=isNaN(c)?0:c),R("voice_search_auth_header_removal")||(a["X-Goog-AuthUser"]=c.toString()),"INNERTUBE_HOST_OVERRIDE"in Rk||(a["X-Origin"]=window.location.origin),void 0===b&&"DELEGATED_SESSION_ID"in Rk&&(a["X-Goog-PageId"]=P("DELEGATED_SESSION_ID")));return a}
;var Vl={identityType:"UNAUTHENTICATED_IDENTITY_TYPE_UNKNOWN"};function Wl(a){var b=this;this.i=void 0;this.h=!1;a.addEventListener("beforeinstallprompt",function(c){c.preventDefault();b.i=c});
a.addEventListener("appinstalled",function(){b.h=!0},{once:!0})}
function Xl(){if(!B.matchMedia)return"WEB_DISPLAY_MODE_UNKNOWN";try{return B.matchMedia("(display-mode: standalone)").matches?"WEB_DISPLAY_MODE_STANDALONE":B.matchMedia("(display-mode: minimal-ui)").matches?"WEB_DISPLAY_MODE_MINIMAL_UI":B.matchMedia("(display-mode: fullscreen)").matches?"WEB_DISPLAY_MODE_FULLSCREEN":B.matchMedia("(display-mode: browser)").matches?"WEB_DISPLAY_MODE_BROWSER":"WEB_DISPLAY_MODE_UNKNOWN"}catch(a){return"WEB_DISPLAY_MODE_UNKNOWN"}}
;function Yl(a,b,c,d,e){xg.set(""+a,b,{hc:c,path:"/",domain:void 0===d?"youtube.com":d,secure:void 0===e?!1:e})}
function Zl(a){return xg.get(""+a,void 0)}
function $l(a,b,c){xg.remove(""+a,void 0===b?"/":b,void 0===c?"youtube.com":c)}
function am(){if(!xg.isEnabled())return!1;if(!xg.Mb())return!0;xg.set("TESTCOOKIESENABLED","1",{hc:60});if("1"!==xg.get("TESTCOOKIESENABLED"))return!1;xg.remove("TESTCOOKIESENABLED");return!0}
;var bm=D("ytglobal.prefsUserPrefsPrefs_")||{};C("ytglobal.prefsUserPrefsPrefs_",bm);function cm(){this.h=P("ALT_PREF_COOKIE_NAME","PREF");this.i=P("ALT_PREF_COOKIE_DOMAIN","youtube.com");var a=Zl(this.h);a&&this.parse(a)}
var dm;function em(){dm||(dm=new cm);return dm}
m=cm.prototype;m.get=function(a,b){fm(a);gm(a);a=void 0!==bm[a]?bm[a].toString():null;return null!=a?a:b?b:""};
m.set=function(a,b){fm(a);gm(a);if(null==b)throw Error("ExpectedNotNull");bm[a]=b.toString()};
function hm(a){return!!((im("f"+(Math.floor(a/31)+1))||0)&1<<a%31)}
m.remove=function(a){fm(a);gm(a);delete bm[a]};
m.clear=function(){for(var a in bm)delete bm[a]};
function gm(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function fm(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function im(a){a=void 0!==bm[a]?bm[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
m.parse=function(a){a=decodeURIComponent(a).split("&");for(var b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(bm[d]=c.toString())}};var jm={bluetooth:"CONN_DISCO",cellular:"CONN_CELLULAR_UNKNOWN",ethernet:"CONN_WIFI",none:"CONN_NONE",wifi:"CONN_WIFI",wimax:"CONN_CELLULAR_4G",other:"CONN_UNKNOWN",unknown:"CONN_UNKNOWN","slow-2g":"CONN_CELLULAR_2G","2g":"CONN_CELLULAR_2G","3g":"CONN_CELLULAR_3G","4g":"CONN_CELLULAR_4G"},km={"slow-2g":"EFFECTIVE_CONNECTION_TYPE_SLOW_2G","2g":"EFFECTIVE_CONNECTION_TYPE_2G","3g":"EFFECTIVE_CONNECTION_TYPE_3G","4g":"EFFECTIVE_CONNECTION_TYPE_4G"};
function lm(){var a=B.navigator;return a?a.connection:void 0}
function mm(){var a=lm();if(a){var b=jm[a.type||"unknown"]||"CONN_UNKNOWN";a=jm[a.effectiveType||"unknown"]||"CONN_UNKNOWN";"CONN_CELLULAR_UNKNOWN"===b&&"CONN_UNKNOWN"!==a&&(b=a);if("CONN_UNKNOWN"!==b)return b;if("CONN_UNKNOWN"!==a)return a}}
function nm(){var a=lm();if(null!=a&&a.effectiveType)return km.hasOwnProperty(a.effectiveType)?km[a.effectiveType]:"EFFECTIVE_CONNECTION_TYPE_UNKNOWN"}
;function T(a){var b=Ia.apply(1,arguments);var c=Error.call(this,a);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.args=[].concat(ma(b))}
w(T,Error);function om(){try{return pm(),!0}catch(a){return!1}}
function pm(a){if(void 0!==P("DATASYNC_ID"))return P("DATASYNC_ID");throw new T("Datasync ID not set",void 0===a?"unknown":a);}
;function qm(){}
function rm(a,b){return ti.Za(a,0,b)}
qm.prototype.oa=function(a,b){return this.Za(a,1,b)};
qm.prototype.Gb=function(a){var b=D("yt.scheduler.instance.addImmediateJob");b?b(a):a()};var sm=ll("web_emulated_idle_callback_delay",300),tm=1E3/60-3,um=[8,5,4,3,2,1,0];
function wm(a){a=void 0===a?{}:a;F.call(this);this.i=[];this.j={};this.Y=this.h=0;this.W=this.m=!1;this.R=[];this.S=this.da=!1;for(var b=v(um),c=b.next();!c.done;c=b.next())this.i[c.value]=[];this.l=0;this.vc=a.timeout||1;this.B=tm;this.s=0;this.ma=this.Be.bind(this);this.uc=this.cf.bind(this);this.Ba=this.Od.bind(this);this.Ia=this.ke.bind(this);this.ob=this.Ee.bind(this);this.na=!!window.requestIdleCallback&&!!window.cancelIdleCallback&&!R("disable_scheduler_requestIdleCallback");(this.ea=!1!==
a.useRaf&&!!window.requestAnimationFrame)&&document.addEventListener("visibilitychange",this.ma)}
w(wm,F);m=wm.prototype;m.Gb=function(a){var b=Wa();xm(this,a);a=Wa()-b;this.m||(this.B-=a)};
m.Za=function(a,b,c){++this.Y;if(10===b)return this.Gb(a),this.Y;var d=this.Y;this.j[d]=a;this.m&&!c?this.R.push({id:d,priority:b}):(this.i[b].push(d),this.W||this.m||(0!==this.h&&ym(this)!==this.s&&this.stop(),this.start()));return d};
m.qa=function(a){delete this.j[a]};
function zm(a){a.R.length=0;for(var b=5;0<=b;b--)a.i[b].length=0;a.i[8].length=0;a.j={};a.stop()}
m.isHidden=function(){return!!document.hidden||!1};
function Am(a){return!a.isHidden()&&a.ea}
function ym(a){if(a.i[8].length){if(a.S)return 4;if(Am(a))return 3}for(var b=5;b>=a.l;b--)if(0<a.i[b].length)return 0<b?Am(a)?3:2:1;return 0}
m.Ob=function(a){var b=D("yt.logging.errors.log");b&&b(a)};
function xm(a,b){try{b()}catch(c){a.Ob(c)}}
function Bm(a){for(var b=v(um),c=b.next();!c.done;c=b.next())if(a.i[c.value].length)return!0;return!1}
m.ke=function(a){var b=void 0;a&&(b=a.timeRemaining());this.da=!0;Cm(this,b);this.da=!1};
m.cf=function(){Cm(this)};
m.Od=function(){Dm(this)};
m.Ee=function(a){this.S=!0;var b=ym(this);4===b&&b!==this.s&&(this.stop(),this.start());Cm(this,void 0,a);this.S=!1};
m.Be=function(){this.isHidden()||Dm(this);this.h&&(this.stop(),this.start())};
function Dm(a){a.stop();a.m=!0;for(var b=Wa(),c=a.i[8];c.length;){var d=c.shift(),e=a.j[d];delete a.j[d];e&&xm(a,e)}Em(a);a.m=!1;Bm(a)&&a.start();b=Wa()-b;a.B-=b}
function Em(a){for(var b=0,c=a.R.length;b<c;b++){var d=a.R[b];a.i[d.priority].push(d.id)}a.R.length=0}
function Cm(a,b,c){a.S&&4===a.s&&a.h||a.stop();a.m=!0;b=Wa()+(b||a.B);for(var d=a.i[5];d.length;){var e=d.shift(),f=a.j[e];delete a.j[e];if(f){e=a;try{f(c)}catch(l){e.Ob(l)}}}for(d=a.i[4];d.length;)c=d.shift(),f=a.j[c],delete a.j[c],f&&xm(a,f);d=a.da?0:1;d=a.l>d?a.l:d;if(!(Wa()>=b)){do{a:{c=a;f=d;for(e=3;e>=f;e--)for(var g=c.i[e];g.length;){var h=g.shift(),k=c.j[h];delete c.j[h];if(k){c=k;break a}}c=null}c&&xm(a,c)}while(c&&Wa()<b)}a.m=!1;Em(a);a.B=tm;Bm(a)&&a.start()}
m.start=function(){this.W=!1;if(0===this.h)switch(this.s=ym(this),this.s){case 1:var a=this.Ia;this.h=this.na?window.requestIdleCallback(a,{timeout:3E3}):window.setTimeout(a,sm);break;case 2:this.h=window.setTimeout(this.uc,this.vc);break;case 3:this.h=window.requestAnimationFrame(this.ob);break;case 4:this.h=window.setTimeout(this.Ba,0)}};
m.pause=function(){this.stop();this.W=!0};
m.stop=function(){if(this.h){switch(this.s){case 1:var a=this.h;this.na?window.cancelIdleCallback(a):window.clearTimeout(a);break;case 2:case 4:window.clearTimeout(this.h);break;case 3:window.cancelAnimationFrame(this.h)}this.h=0}};
m.M=function(){zm(this);this.stop();this.ea&&document.removeEventListener("visibilitychange",this.ma);F.prototype.M.call(this)};var Fm=D("yt.scheduler.instance.timerIdMap_")||{},Gm=ll("kevlar_tuner_scheduler_soft_state_timer_ms",800),Hm=0,Im=0;function Jm(){var a=D("ytglobal.schedulerInstanceInstance_");if(!a||a.Z())a=new wm(P("scheduler")||{}),C("ytglobal.schedulerInstanceInstance_",a);return a}
function Km(){Lm();var a=D("ytglobal.schedulerInstanceInstance_");a&&(wc(a),C("ytglobal.schedulerInstanceInstance_",null))}
function Lm(){zm(Jm());for(var a in Fm)Fm.hasOwnProperty(a)&&delete Fm[Number(a)]}
function Mm(a,b,c){if(!c)return c=void 0===c,-Jm().Za(a,b,c);var d=window.setTimeout(function(){var e=Jm().Za(a,b);Fm[d]=e},c);
return d}
function Nm(a){Jm().Gb(a)}
function Om(a){var b=Jm();if(0>a)b.qa(-a);else{var c=Fm[a];c?(b.qa(c),delete Fm[a]):window.clearTimeout(a)}}
function Pm(){Qm()}
function Qm(){window.clearTimeout(Hm);Jm().start()}
function Rm(){Jm().pause();window.clearTimeout(Hm);Hm=window.setTimeout(Pm,Gm)}
function Sm(){window.clearTimeout(Im);Im=window.setTimeout(function(){Tm(0)},Gm)}
function Tm(a){Sm();var b=Jm();b.l=a;b.start()}
function Um(a){Sm();var b=Jm();b.l>a&&(b.l=a,b.start())}
function Vm(){window.clearTimeout(Im);var a=Jm();a.l=0;a.start()}
function Wm(){D("yt.scheduler.initialized")||(C("yt.scheduler.instance.dispose",Km),C("yt.scheduler.instance.addJob",Mm),C("yt.scheduler.instance.addImmediateJob",Nm),C("yt.scheduler.instance.cancelJob",Om),C("yt.scheduler.instance.cancelAllJobs",Lm),C("yt.scheduler.instance.start",Qm),C("yt.scheduler.instance.pause",Rm),C("yt.scheduler.instance.setPriorityThreshold",Tm),C("yt.scheduler.instance.enablePriorityThreshold",Um),C("yt.scheduler.instance.clearPriorityThreshold",Vm),C("yt.scheduler.initialized",
!0))}
;function Ym(){qm.apply(this,arguments)}
w(Ym,qm);function Zm(){Ym.h||(Ym.h=new Ym);return Ym.h}
Ym.prototype.Za=function(a,b,c){void 0!==c&&Number.isNaN(Number(c))&&(c=void 0);var d=D("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):ql(a,c||0)};
Ym.prototype.qa=function(a){if(void 0===a||!Number.isNaN(Number(a))){var b=D("yt.scheduler.instance.cancelJob");b?b(a):window.clearTimeout(a)}};
Ym.prototype.start=function(){var a=D("yt.scheduler.instance.start");a&&a()};
Ym.prototype.pause=function(){var a=D("yt.scheduler.instance.pause");a&&a()};
var ti=Zm();R("web_scheduler_auto_init")&&Wm();function $m(a){var b=new aj;(b=b.isAvailable()?a?new gj(b,a):b:null)||(a=new bj(a||"UserDataSharedStore"),b=a.isAvailable()?a:null);this.h=(a=b)?new Xi(a):null;this.i=document.domain||window.location.hostname}
$m.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.h)try{this.h.set(a,b,Date.now()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape((new gh).serialize(b))}catch(f){return}else e=escape(b);Yl(a,e,c,this.i)};
$m.prototype.get=function(a,b){var c=void 0,d=!this.h;if(!d)try{c=this.h.get(a)}catch(e){d=!0}if(d&&(c=Zl(a))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
$m.prototype.remove=function(a){this.h&&this.h.remove(a);$l(a,"/",this.i)};var an=function(){var a;return function(){a||(a=new $m("ytidb"));return a}}();
function bn(){var a;return null==(a=an())?void 0:a.get("LAST_RESULT_ENTRY_KEY",!0)}
;var cn=[],dn,en=!1;function fn(){var a={};for(dn=new gn(void 0===a.handleError?hn:a.handleError,void 0===a.logEvent?jn:a.logEvent);0<cn.length;)switch(a=cn.shift(),a.type){case "ERROR":dn.Ob(a.payload);break;case "EVENT":dn.logEvent(a.eventType,a.payload)}}
function kn(a){en||(dn?dn.Ob(a):(cn.push({type:"ERROR",payload:a}),10<cn.length&&cn.shift()))}
function ln(a,b){en||(dn?dn.logEvent(a,b):(cn.push({type:"EVENT",eventType:a,payload:b}),10<cn.length&&cn.shift()))}
;function mn(a){if(0<=a.indexOf(":"))throw Error("Database name cannot contain ':'");}
function nn(a){return a.substr(0,a.indexOf(":"))||a}
;var on=Be||Ce;function pn(a){var b=Ob();return b?0<=b.toLowerCase().indexOf(a):!1}
;var qn={},rn=(qn.AUTH_INVALID="No user identifier specified.",qn.EXPLICIT_ABORT="Transaction was explicitly aborted.",qn.IDB_NOT_SUPPORTED="IndexedDB is not supported.",qn.MISSING_INDEX="Index not created.",qn.MISSING_OBJECT_STORES="Object stores not created.",qn.DB_DELETED_BY_MISSING_OBJECT_STORES="Database is deleted because expected object stores were not created.",qn.DB_REOPENED_BY_MISSING_OBJECT_STORES="Database is reopened because expected object stores were not created.",qn.UNKNOWN_ABORT="Transaction was aborted for unknown reasons.",
qn.QUOTA_EXCEEDED="The current transaction exceeded its quota limitations.",qn.QUOTA_MAYBE_EXCEEDED="The current transaction may have failed because of exceeding quota limitations.",qn.EXECUTE_TRANSACTION_ON_CLOSED_DB="Can't start a transaction on a closed database",qn.INCOMPATIBLE_DB_VERSION="The binary is incompatible with the database version",qn),sn={},tn=(sn.AUTH_INVALID="ERROR",sn.EXECUTE_TRANSACTION_ON_CLOSED_DB="WARNING",sn.EXPLICIT_ABORT="IGNORED",sn.IDB_NOT_SUPPORTED="ERROR",sn.MISSING_INDEX=
"WARNING",sn.MISSING_OBJECT_STORES="ERROR",sn.DB_DELETED_BY_MISSING_OBJECT_STORES="WARNING",sn.DB_REOPENED_BY_MISSING_OBJECT_STORES="WARNING",sn.QUOTA_EXCEEDED="WARNING",sn.QUOTA_MAYBE_EXCEEDED="WARNING",sn.UNKNOWN_ABORT="WARNING",sn.INCOMPATIBLE_DB_VERSION="WARNING",sn),un={},vn=(un.AUTH_INVALID=!1,un.EXECUTE_TRANSACTION_ON_CLOSED_DB=!1,un.EXPLICIT_ABORT=!1,un.IDB_NOT_SUPPORTED=!1,un.MISSING_INDEX=!1,un.MISSING_OBJECT_STORES=!1,un.DB_DELETED_BY_MISSING_OBJECT_STORES=!1,un.DB_REOPENED_BY_MISSING_OBJECT_STORES=
!1,un.QUOTA_EXCEEDED=!1,un.QUOTA_MAYBE_EXCEEDED=!0,un.UNKNOWN_ABORT=!0,un.INCOMPATIBLE_DB_VERSION=!1,un);function wn(a,b,c,d,e){b=void 0===b?{}:b;c=void 0===c?rn[a]:c;d=void 0===d?tn[a]:d;e=void 0===e?vn[a]:e;T.call(this,c,Object.assign({},{name:"YtIdbKnownError",isSw:void 0===self.document,isIframe:self!==self.top,type:a},b));this.type=a;this.message=c;this.level=d;this.h=e;Object.setPrototypeOf(this,wn.prototype)}
w(wn,T);function xn(a,b){wn.call(this,"MISSING_OBJECT_STORES",{expectedObjectStores:b,foundObjectStores:a},rn.MISSING_OBJECT_STORES);Object.setPrototypeOf(this,xn.prototype)}
w(xn,wn);function yn(a,b){var c=Error.call(this);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.index=a;this.objectStore=b;Object.setPrototypeOf(this,yn.prototype)}
w(yn,Error);var zn=["The database connection is closing","Can't start a transaction on a closed database","A mutation operation was attempted on a database that did not allow mutations"];
function An(a,b,c,d){b=nn(b);var e=a instanceof Error?a:Error("Unexpected error: "+a);if(e instanceof wn)return e;a={objectStoreNames:c,dbName:b,dbVersion:d};if("QuotaExceededError"===e.name)return new wn("QUOTA_EXCEEDED",a);if(De&&"UnknownError"===e.name)return new wn("QUOTA_MAYBE_EXCEEDED",a);if(e instanceof yn)return new wn("MISSING_INDEX",Object.assign({},a,{objectStore:e.objectStore,index:e.index}));if("InvalidStateError"===e.name&&zn.some(function(f){return e.message.includes(f)}))return new wn("EXECUTE_TRANSACTION_ON_CLOSED_DB",
a);
if("AbortError"===e.name)return new wn("UNKNOWN_ABORT",a,e.message);e.args=[Object.assign({},a,{name:"IdbError",rd:e.name})];e.level="WARNING";return e}
function Bn(a,b,c){var d=bn();return new wn("IDB_NOT_SUPPORTED",{context:{caller:a,publicName:b,version:c,hasSucceededOnce:null==d?void 0:d.hasSucceededOnce}})}
;function Cn(a){if(!a)throw Error();throw a;}
function Dn(a){return a}
function En(a){this.h=a}
function Fn(a){function b(e){if("PENDING"===d.state.status){d.state={status:"REJECTED",reason:e};e=v(d.i);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
function c(e){if("PENDING"===d.state.status){d.state={status:"FULFILLED",value:e};e=v(d.h);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
var d=this;this.state={status:"PENDING"};this.h=[];this.i=[];a=a.h;try{a(c,b)}catch(e){b(e)}}
Fn.all=function(a){return new Fn(new En(function(b,c){var d=[],e=a.length;0===e&&b(d);for(var f={vb:0};f.vb<a.length;f={vb:f.vb},++f.vb)Fn.resolve(a[f.vb]).then(function(g){return function(h){d[g.vb]=h;e--;0===e&&b(d)}}(f)).catch(function(g){c(g)})}))};
Fn.resolve=function(a){return new Fn(new En(function(b,c){a instanceof Fn?a.then(b,c):b(a)}))};
Fn.reject=function(a){return new Fn(new En(function(b,c){c(a)}))};
Fn.prototype.then=function(a,b){var c=this,d=null!=a?a:Dn,e=null!=b?b:Cn;return new Fn(new En(function(f,g){"PENDING"===c.state.status?(c.h.push(function(){Gn(c,c,d,f,g)}),c.i.push(function(){Hn(c,c,e,f,g)})):"FULFILLED"===c.state.status?Gn(c,c,d,f,g):"REJECTED"===c.state.status&&Hn(c,c,e,f,g)}))};
Fn.prototype.catch=function(a){return this.then(void 0,a)};
function Gn(a,b,c,d,e){try{if("FULFILLED"!==a.state.status)throw Error("calling handleResolve before the promise is fulfilled.");var f=c(a.state.value);f instanceof Fn?In(a,b,f,d,e):d(f)}catch(g){e(g)}}
function Hn(a,b,c,d,e){try{if("REJECTED"!==a.state.status)throw Error("calling handleReject before the promise is rejected.");var f=c(a.state.reason);f instanceof Fn?In(a,b,f,d,e):d(f)}catch(g){e(g)}}
function In(a,b,c,d,e){b===c?e(new TypeError("Circular promise chain detected.")):c.then(function(f){f instanceof Fn?In(a,b,f,d,e):d(f)},function(f){e(f)})}
;function Jn(a,b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){try{a.removeEventListener("success",e),a.removeEventListener("error",d)}catch(g){}}
a.addEventListener("success",e);a.addEventListener("error",d)}
function Kn(a){return new Promise(function(b,c){Jn(a,b,c)})}
function Ln(a){return new Fn(new En(function(b,c){Jn(a,b,c)}))}
;function Mn(a,b){return new Fn(new En(function(c,d){function e(){var f=a?b(a):null;f?f.then(function(g){a=g;e()},d):c()}
e()}))}
;var Nn=window,U=Nn.ytcsi&&Nn.ytcsi.now?Nn.ytcsi.now:Nn.performance&&Nn.performance.timing&&Nn.performance.now&&Nn.performance.timing.navigationStart?function(){return Nn.performance.timing.navigationStart+Nn.performance.now()}:function(){return(new Date).getTime()};function On(a,b){this.h=a;this.options=b;this.transactionCount=0;this.j=Math.round(U());this.i=!1}
m=On.prototype;m.add=function(a,b,c){return Pn(this,[a],{mode:"readwrite",ia:!0},function(d){return d.objectStore(a).add(b,c)})};
m.clear=function(a){return Pn(this,[a],{mode:"readwrite",ia:!0},function(b){return b.objectStore(a).clear()})};
m.close=function(){this.h.close();var a;(null==(a=this.options)?0:a.closed)&&this.options.closed()};
m.count=function(a,b){return Pn(this,[a],{mode:"readonly",ia:!0},function(c){return c.objectStore(a).count(b)})};
function Qn(a,b,c){a=a.h.createObjectStore(b,c);return new Rn(a)}
m.delete=function(a,b){return Pn(this,[a],{mode:"readwrite",ia:!0},function(c){return c.objectStore(a).delete(b)})};
m.get=function(a,b){return Pn(this,[a],{mode:"readonly",ia:!0},function(c){return c.objectStore(a).get(b)})};
function Sn(a,b,c){return Pn(a,[b],{mode:"readwrite",ia:!0},function(d){d=d.objectStore(b);return Ln(d.h.put(c,void 0))})}
m.objectStoreNames=function(){return Array.from(this.h.objectStoreNames)};
function Pn(a,b,c,d){var e,f,g,h,k,l,n,p,t,r,x,y;return A(function(z){switch(z.h){case 1:var H={mode:"readonly",ia:!1,tag:"IDB_TRANSACTION_TAG_UNKNOWN"};"string"===typeof c?H.mode=c:Object.assign(H,c);e=H;a.transactionCount++;f=e.ia?3:1;g=0;case 2:if(h){z.v(4);break}g++;k=Math.round(U());za(z,5);l=a.h.transaction(b,e.mode);H=z.yield;var L=new Tn(l);L=Un(L,d);return H.call(z,L,7);case 7:return n=z.i,p=Math.round(U()),Vn(a,k,p,g,void 0,b.join(),e),z.return(n);case 5:t=Aa(z);r=Math.round(U());x=An(t,
a.h.name,b.join(),a.h.version);if((y=x instanceof wn&&!x.h)||g>=f)Vn(a,k,r,g,x,b.join(),e),h=x;z.v(2);break;case 4:return z.return(Promise.reject(h))}})}
function Vn(a,b,c,d,e,f,g){b=c-b;e?(e instanceof wn&&("QUOTA_EXCEEDED"===e.type||"QUOTA_MAYBE_EXCEEDED"===e.type)&&ln("QUOTA_EXCEEDED",{dbName:nn(a.h.name),objectStoreNames:f,transactionCount:a.transactionCount,transactionMode:g.mode}),e instanceof wn&&"UNKNOWN_ABORT"===e.type&&(c-=a.j,0>c&&c>=Math.pow(2,31)&&(c=0),ln("TRANSACTION_UNEXPECTEDLY_ABORTED",{objectStoreNames:f,transactionDuration:b,transactionCount:a.transactionCount,dbDuration:c}),a.i=!0),Wn(a,!1,d,f,b,g.tag),kn(e)):Wn(a,!0,d,f,b,g.tag)}
function Wn(a,b,c,d,e,f){ln("TRANSACTION_ENDED",{objectStoreNames:d,connectionHasUnknownAbortedTransaction:a.i,duration:e,isSuccessful:b,tryCount:c,tag:void 0===f?"IDB_TRANSACTION_TAG_UNKNOWN":f})}
m.getName=function(){return this.h.name};
function Rn(a){this.h=a}
m=Rn.prototype;m.add=function(a,b){return Ln(this.h.add(a,b))};
m.autoIncrement=function(){return this.h.autoIncrement};
m.clear=function(){return Ln(this.h.clear()).then(function(){})};
function Xn(a,b,c){a.h.createIndex(b,c,{unique:!1})}
m.count=function(a){return Ln(this.h.count(a))};
function Yn(a,b){return Zn(a,{query:b},function(c){return c.delete().then(function(){return c.continue()})}).then(function(){})}
m.delete=function(a){return a instanceof IDBKeyRange?Yn(this,a):Ln(this.h.delete(a))};
m.get=function(a){return Ln(this.h.get(a))};
m.index=function(a){try{return new $n(this.h.index(a))}catch(b){if(b instanceof Error&&"NotFoundError"===b.name)throw new yn(a,this.h.name);throw b;}};
m.getName=function(){return this.h.name};
m.keyPath=function(){return this.h.keyPath};
function Zn(a,b,c){a=a.h.openCursor(b.query,b.direction);return ao(a).then(function(d){return Mn(d,c)})}
function Tn(a){var b=this;this.h=a;this.i=new Map;this.aborted=!1;this.done=new Promise(function(c,d){b.h.addEventListener("complete",function(){c()});
b.h.addEventListener("error",function(e){e.currentTarget===e.target&&d(b.h.error)});
b.h.addEventListener("abort",function(){var e=b.h.error;if(e)d(e);else if(!b.aborted){e=wn;for(var f=b.h.objectStoreNames,g=[],h=0;h<f.length;h++){var k=f.item(h);if(null===k)throw Error("Invariant: item in DOMStringList is null");g.push(k)}e=new e("UNKNOWN_ABORT",{objectStoreNames:g.join(),dbName:b.h.db.name,mode:b.h.mode});d(e)}})})}
function Un(a,b){var c=new Promise(function(d,e){try{b(a).then(function(f){d(f)}).catch(e)}catch(f){e(f),a.abort()}});
return Promise.all([c,a.done]).then(function(d){return v(d).next().value})}
Tn.prototype.abort=function(){this.h.abort();this.aborted=!0;throw new wn("EXPLICIT_ABORT");};
Tn.prototype.objectStore=function(a){a=this.h.objectStore(a);var b=this.i.get(a);b||(b=new Rn(a),this.i.set(a,b));return b};
function $n(a){this.h=a}
m=$n.prototype;m.count=function(a){return Ln(this.h.count(a))};
m.delete=function(a){return bo(this,{query:a},function(b){return b.delete().then(function(){return b.continue()})})};
m.get=function(a){return Ln(this.h.get(a))};
m.getKey=function(a){return Ln(this.h.getKey(a))};
m.keyPath=function(){return this.h.keyPath};
m.unique=function(){return this.h.unique};
function bo(a,b,c){a=a.h.openCursor(void 0===b.query?null:b.query,void 0===b.direction?"next":b.direction);return ao(a).then(function(d){return Mn(d,c)})}
function co(a,b){this.request=a;this.cursor=b}
function ao(a){return Ln(a).then(function(b){return b?new co(a,b):null})}
m=co.prototype;m.advance=function(a){this.cursor.advance(a);return ao(this.request)};
m.continue=function(a){this.cursor.continue(a);return ao(this.request)};
m.delete=function(){return Ln(this.cursor.delete()).then(function(){})};
m.getKey=function(){return this.cursor.key};
m.getValue=function(){return this.cursor.value};
m.update=function(a){return Ln(this.cursor.update(a))};function eo(a,b,c){return new Promise(function(d,e){function f(){t||(t=new On(g.result,{closed:p}));return t}
var g=void 0!==b?self.indexedDB.open(a,b):self.indexedDB.open(a);var h=c.Qd,k=c.blocking,l=c.af,n=c.upgrade,p=c.closed,t;g.addEventListener("upgradeneeded",function(r){try{if(null===r.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===g.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");r.dataLoss&&"none"!==r.dataLoss&&ln("IDB_DATA_CORRUPTED",{reason:r.dataLossMessage||"unknown reason",dbName:nn(a)});var x=f(),y=new Tn(g.transaction);
n&&n(x,function(z){return r.oldVersion<z&&r.newVersion>=z},y);
y.done.catch(function(z){e(z)})}catch(z){e(z)}});
g.addEventListener("success",function(){var r=g.result;k&&r.addEventListener("versionchange",function(){k(f())});
r.addEventListener("close",function(){ln("IDB_UNEXPECTEDLY_CLOSED",{dbName:nn(a),dbVersion:r.version});l&&l()});
d(f())});
g.addEventListener("error",function(){e(g.error)});
h&&g.addEventListener("blocked",function(){h()})})}
function fo(a,b,c){c=void 0===c?{}:c;return eo(a,b,c)}
function go(a,b){b=void 0===b?{}:b;var c,d,e,f;return A(function(g){if(1==g.h)return za(g,2),c=self.indexedDB.deleteDatabase(a),d=b,(e=d.Qd)&&c.addEventListener("blocked",function(){e()}),g.yield(Kn(c),4);
if(2!=g.h)g.h=0,g.l=0;else throw f=Aa(g),An(f,a,"",-1);})}
;function ho(a,b){this.name=a;this.options=b;this.j=!0;this.m=this.l=0}
ho.prototype.i=function(a,b,c){c=void 0===c?{}:c;return fo(a,b,c)};
ho.prototype.delete=function(a){a=void 0===a?{}:a;return go(this.name,a)};
function io(a,b){return new wn("INCOMPATIBLE_DB_VERSION",{dbName:a.name,oldVersion:a.options.version,newVersion:b})}
function jo(a,b){if(!b)throw Bn("openWithToken",nn(a.name));return a.open()}
ho.prototype.open=function(){function a(){var f,g,h,k,l,n,p,t,r,x;return A(function(y){switch(y.h){case 1:return g=null!=(f=Error().stack)?f:"",za(y,2),y.yield(c.i(c.name,c.options.version,e),4);case 4:h=y.i;for(var z=c.options,H=[],L=v(Object.keys(z.Cb)),I=L.next();!I.done;I=L.next()){I=I.value;var da=z.Cb[I],S=void 0===da.He?Number.MAX_VALUE:da.He;!(h.h.version>=da.Hb)||h.h.version>=S||h.h.objectStoreNames.contains(I)||H.push(I)}k=H;if(0===k.length){y.v(5);break}l=Object.keys(c.options.Cb);n=h.objectStoreNames();
if(c.m<ll("ytidb_reopen_db_retries",0))return c.m++,h.close(),kn(new wn("DB_REOPENED_BY_MISSING_OBJECT_STORES",{dbName:c.name,expectedObjectStores:l,foundObjectStores:n})),y.return(a());if(!(c.l<ll("ytidb_remake_db_retries",1))){y.v(6);break}c.l++;return y.yield(c.delete(),7);case 7:return kn(new wn("DB_DELETED_BY_MISSING_OBJECT_STORES",{dbName:c.name,expectedObjectStores:l,foundObjectStores:n})),y.return(a());case 6:throw new xn(n,l);case 5:return y.return(h);case 2:p=Aa(y);if(p instanceof DOMException?
"VersionError"!==p.name:"DOMError"in self&&p instanceof DOMError?"VersionError"!==p.name:!(p instanceof Object&&"message"in p)||"An attempt was made to open a database using a lower version than the existing version."!==p.message){y.v(8);break}return y.yield(c.i(c.name,void 0,Object.assign({},e,{upgrade:void 0})),9);case 9:t=y.i;r=t.h.version;if(void 0!==c.options.version&&r>c.options.version+1)throw t.close(),c.j=!1,io(c,r);return y.return(t);case 8:throw b(),p instanceof Error&&!R("ytidb_async_stack_killswitch")&&
(p.stack=p.stack+"\n"+g.substring(g.indexOf("\n")+1)),An(p,c.name,"",null!=(x=c.options.version)?x:-1);}})}
function b(){c.h===d&&(c.h=void 0)}
var c=this;if(!this.j)throw io(this);if(this.h)return this.h;var d,e={blocking:function(f){f.close()},
closed:b,af:b,upgrade:this.options.upgrade};return this.h=d=a()};var ko=new ho("YtIdbMeta",{Cb:{databases:{Hb:1}},upgrade:function(a,b){b(1)&&Qn(a,"databases",{keyPath:"actualName"})}});
function lo(a,b){var c;return A(function(d){if(1==d.h)return d.yield(jo(ko,b),2);c=d.i;return d.return(Pn(c,["databases"],{ia:!0,mode:"readwrite"},function(e){var f=e.objectStore("databases");return f.get(a.actualName).then(function(g){if(g?a.actualName!==g.actualName||a.publicName!==g.publicName||a.userIdentifier!==g.userIdentifier:1)return Ln(f.h.put(a,void 0)).then(function(){})})}))})}
function mo(a,b){var c;return A(function(d){if(1==d.h)return a?d.yield(jo(ko,b),2):d.return();c=d.i;return d.return(c.delete("databases",a))})}
function no(a,b){var c,d;return A(function(e){return 1==e.h?(c=[],e.yield(jo(ko,b),2)):3!=e.h?(d=e.i,e.yield(Pn(d,["databases"],{ia:!0,mode:"readonly"},function(f){c.length=0;return Zn(f.objectStore("databases"),{},function(g){a(g.getValue())&&c.push(g.getValue());return g.continue()})}),3)):e.return(c)})}
function oo(a){return no(function(b){return"LogsDatabaseV2"===b.publicName&&void 0!==b.userIdentifier},a)}
function po(a,b,c){return no(function(d){return c?void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)&&c.includes(d.publicName):void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)},b)}
function qo(a){var b,c;return A(function(d){if(1==d.h)return b=pm("YtIdbMeta hasAnyMeta other"),d.yield(no(function(e){return void 0!==e.userIdentifier&&e.userIdentifier!==b},a),2);
c=d.i;return d.return(0<c.length)})}
;var ro,so=new function(){}(new function(){});
function to(){var a,b,c,d;return A(function(e){switch(e.h){case 1:a=bn();if(null==(b=a)?0:b.hasSucceededOnce)return e.return(!0);var f;if(f=on)f=/WebKit\/([0-9]+)/.exec(Ob()),f=!!(f&&600<=parseInt(f[1],10));f&&(f=/WebKit\/([0-9]+)/.exec(Ob()),f=!(f&&602<=parseInt(f[1],10)));if(f||Pc)return e.return(!1);try{if(c=self,!(c.indexedDB&&c.IDBIndex&&c.IDBKeyRange&&c.IDBObjectStore))return e.return(!1)}catch(g){return e.return(!1)}if(!("IDBTransaction"in self&&"objectStoreNames"in IDBTransaction.prototype))return e.return(!1);
za(e,2);d={actualName:"yt-idb-test-do-not-use",publicName:"yt-idb-test-do-not-use",userIdentifier:void 0};return e.yield(lo(d,so),4);case 4:return e.yield(mo("yt-idb-test-do-not-use",so),5);case 5:return e.return(!0);case 2:return Aa(e),e.return(!1)}})}
function uo(){if(void 0!==ro)return ro;en=!0;return ro=to().then(function(a){en=!1;var b;if(null!=(b=an())&&b.h){var c;b={hasSucceededOnce:(null==(c=bn())?void 0:c.hasSucceededOnce)||a};var d;null==(d=an())||d.set("LAST_RESULT_ENTRY_KEY",b,2592E3,!0)}return a})}
function vo(){return D("ytglobal.idbToken_")||void 0}
function wo(){var a=vo();return a?Promise.resolve(a):uo().then(function(b){(b=b?so:void 0)&&C("ytglobal.idbToken_",b);return b})}
;var xo=0;function yo(a,b){xo||(xo=ti.oa(function(){var c,d,e,f,g;return A(function(h){switch(h.h){case 1:return h.yield(wo(),2);case 2:c=h.i;if(!c)return h.return();d=!0;za(h,3);return h.yield(po(a,c,b),5);case 5:e=h.i;if(!e.length){d=!1;h.v(6);break}f=e[0];return h.yield(go(f.actualName),7);case 7:return h.yield(mo(f.actualName,c),6);case 6:h.h=4;h.l=0;break;case 3:g=Aa(h),kn(g),d=!1;case 4:ti.qa(xo),xo=0,d&&yo(a,b),h.h=0}})}))}
function zo(){var a;return A(function(b){return 1==b.h?b.yield(wo(),2):(a=b.i)?b.return(qo(a)):b.return(!1)})}
new Ih;function Ao(a){if(!om())throw a=new wn("AUTH_INVALID",{dbName:a}),kn(a),a;var b=pm();return{actualName:a+":"+b,publicName:a,userIdentifier:b}}
function Bo(a,b,c,d){var e,f,g,h,k,l;return A(function(n){switch(n.h){case 1:return f=null!=(e=Error().stack)?e:"",n.yield(wo(),2);case 2:g=n.i;if(!g)throw h=Bn("openDbImpl",a,b),R("ytidb_async_stack_killswitch")||(h.stack=h.stack+"\n"+f.substring(f.indexOf("\n")+1)),kn(h),h;mn(a);k=c?{actualName:a,publicName:a,userIdentifier:void 0}:Ao(a);za(n,3);return n.yield(lo(k,g),5);case 5:return n.yield(fo(k.actualName,b,d),6);case 6:return n.return(n.i);case 3:return l=Aa(n),za(n,7),n.yield(mo(k.actualName,
g),9);case 9:n.h=8;n.l=0;break;case 7:Aa(n);case 8:throw l;}})}
function Co(a,b,c){c=void 0===c?{}:c;return Bo(a,b,!1,c)}
function Do(a,b,c){c=void 0===c?{}:c;return Bo(a,b,!0,c)}
function Eo(a,b){b=void 0===b?{}:b;var c,d;return A(function(e){if(1==e.h)return e.yield(wo(),2);if(3!=e.h){c=e.i;if(!c)return e.return();mn(a);d=Ao(a);return e.yield(go(d.actualName,b),3)}return e.yield(mo(d.actualName,c),0)})}
function Fo(a,b,c){a=a.map(function(d){return A(function(e){return 1==e.h?e.yield(go(d.actualName,b),2):e.yield(mo(d.actualName,c),0)})});
return Promise.all(a).then(function(){})}
function Go(){var a=void 0===a?{}:a;var b,c;return A(function(d){if(1==d.h)return d.yield(wo(),2);if(3!=d.h){b=d.i;if(!b)return d.return();mn("LogsDatabaseV2");return d.yield(oo(b),3)}c=d.i;return d.yield(Fo(c,a,b),0)})}
function Ho(a,b){b=void 0===b?{}:b;var c;return A(function(d){if(1==d.h)return d.yield(wo(),2);if(3!=d.h){c=d.i;if(!c)return d.return();mn(a);return d.yield(go(a,b),3)}return d.yield(mo(a,c),0)})}
;function Io(a,b){ho.call(this,a,b);this.options=b;mn(a)}
w(Io,ho);function Jo(a,b){var c;return function(){c||(c=new Io(a,b));return c}}
Io.prototype.i=function(a,b,c){c=void 0===c?{}:c;return(this.options.pc?Do:Co)(a,b,Object.assign({},c))};
Io.prototype.delete=function(a){a=void 0===a?{}:a;return(this.options.pc?Ho:Eo)(this.name,a)};
function Ko(a,b){return Jo(a,b)}
;var Lo={},Mo=Ko("ytGcfConfig",{Cb:(Lo.coldConfigStore={Hb:1},Lo.hotConfigStore={Hb:1},Lo),pc:!1,upgrade:function(a,b){b(1)&&(Xn(Qn(a,"hotConfigStore",{keyPath:"key",autoIncrement:!0}),"hotTimestampIndex","timestamp"),Xn(Qn(a,"coldConfigStore",{keyPath:"key",autoIncrement:!0}),"coldTimestampIndex","timestamp"))},
version:1});function No(a){return jo(Mo(),a)}
function Oo(a,b,c){var d,e,f;return A(function(g){switch(g.h){case 1:return d={config:a,hashData:b,timestamp:U()},g.yield(No(c),2);case 2:return e=g.i,g.yield(e.clear("hotConfigStore"),3);case 3:return g.yield(Sn(e,"hotConfigStore",d),4);case 4:return f=g.i,g.return(f)}})}
function Po(a,b,c,d){var e,f,g;return A(function(h){switch(h.h){case 1:return e={config:a,hashData:b,configData:c,timestamp:U()},h.yield(No(d),2);case 2:return f=h.i,h.yield(f.clear("coldConfigStore"),3);case 3:return h.yield(Sn(f,"coldConfigStore",e),4);case 4:return g=h.i,h.return(g)}})}
function Qo(a){var b,c;return A(function(d){return 1==d.h?d.yield(No(a),2):3!=d.h?(b=d.i,c=void 0,d.yield(Pn(b,["coldConfigStore"],{mode:"readwrite",ia:!0},function(e){return bo(e.objectStore("coldConfigStore").index("coldTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
function Ro(a){var b,c;return A(function(d){return 1==d.h?d.yield(No(a),2):3!=d.h?(b=d.i,c=void 0,d.yield(Pn(b,["hotConfigStore"],{mode:"readwrite",ia:!0},function(e){return bo(e.objectStore("hotConfigStore").index("hotTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
;function So(){F.call(this);this.i=[];this.h=[];var a=D("yt.gcf.config.hotUpdateCallbacks");a?(this.i=[].concat(ma(a)),this.h=a):(this.h=[],C("yt.gcf.config.hotUpdateCallbacks",this.h))}
w(So,F);So.prototype.M=function(){for(var a=v(this.i),b=a.next();!b.done;b=a.next()){var c=this.h;b=c.indexOf(b.value);0<=b&&c.splice(b,1)}this.i.length=0;F.prototype.M.call(this)};function To(){this.h=0;this.i=new So}
function Uo(){var a;return null!=(a=D("yt.gcf.config.hotConfigGroup"))?a:null}
function Vo(a,b,c){var d,e,f;return A(function(g){switch(g.h){case 1:if(!R("start_client_gcf")){g.v(0);break}c&&(a.j=c,C("yt.gcf.config.hotConfigGroup",a.j||null));a.l(b);d=vo();if(!d){g.v(3);break}if(c){g.v(4);break}return g.yield(Ro(d),5);case 5:e=g.i,c=null==(f=e)?void 0:f.config;case 4:return g.yield(Oo(c,b,d),3);case 3:if(c)for(var h=c,k=v(a.i.h),l=k.next();!l.done;l=k.next())l=l.value,l(h);g.h=0}})}
function Wo(a,b,c){var d,e,f,g;return A(function(h){if(1==h.h){if(!R("start_client_gcf"))return h.v(0);a.coldHashData=b;C("yt.gcf.config.coldHashData",a.coldHashData||null);return(d=vo())?c?h.v(4):h.yield(Qo(d),5):h.v(0)}4!=h.h&&(e=h.i,c=null==(f=e)?void 0:f.config);if(!c)return h.v(0);g=c.configData;return h.yield(Po(c,b,g,d),0)})}
function Xo(){if(!To.h){var a=new To;To.h=a}a=To.h;var b=U()-a.h;if(!(0!==a.h&&b<ll("send_config_hash_timer"))){b=D("yt.gcf.config.coldConfigData");var c=D("yt.gcf.config.hotHashData"),d=D("yt.gcf.config.coldHashData");b&&c&&d&&(a.h=U());return{coldConfigData:b,hotHashData:c,coldHashData:d}}}
To.prototype.l=function(a){this.hotHashData=a;C("yt.gcf.config.hotHashData",this.hotHashData||null)};function Yo(){return"INNERTUBE_API_KEY"in Rk&&"INNERTUBE_API_VERSION"in Rk}
function Zo(){return{innertubeApiKey:P("INNERTUBE_API_KEY"),innertubeApiVersion:P("INNERTUBE_API_VERSION"),le:P("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),md:P("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),Sf:P("INNERTUBE_CONTEXT_CLIENT_NAME",1),innertubeContextClientVersion:P("INNERTUBE_CONTEXT_CLIENT_VERSION"),ne:P("INNERTUBE_CONTEXT_HL"),me:P("INNERTUBE_CONTEXT_GL"),oe:P("INNERTUBE_HOST_OVERRIDE")||"",qe:!!P("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),pe:!!P("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1),appInstallData:P("SERIALIZED_CLIENT_CONFIG_DATA")}}
function $o(a){var b={client:{hl:a.ne,gl:a.me,clientName:a.md,clientVersion:a.innertubeContextClientVersion,configInfo:a.le}};navigator.userAgent&&(b.client.userAgent=String(navigator.userAgent));var c=B.devicePixelRatio;c&&1!=c&&(b.client.screenDensityFloat=String(c));c=P("EXPERIMENTS_TOKEN","");""!==c&&(b.client.experimentsToken=c);c=ml();0<c.length&&(b.request={internalExperimentFlags:c});c=a.md;if(("WEB"===c||"MWEB"===c||1===c||2===c)&&b){var d;b.client.mainAppWebInfo=null!=(d=b.client.mainAppWebInfo)?
d:{};b.client.mainAppWebInfo.webDisplayMode=Xl()}(d=D("yt.embedded_player.embed_url"))&&b&&(b.thirdParty={embedUrl:d});var e;if(R("web_log_memory_total_kbytes")&&(null==(e=B.navigator)?0:e.deviceMemory)){var f;e=null==(f=B.navigator)?void 0:f.deviceMemory;b&&(b.client.memoryTotalKbytes=""+1E6*e)}a.appInstallData&&b&&(b.client.configInfo=b.client.configInfo||{},b.client.configInfo.appInstallData=a.appInstallData);(a=mm())&&b&&(b.client.connectionType=a);R("web_log_effective_connection_type")&&(a=nm())&&
b&&(b.client.effectiveConnectionType=a);R("start_client_gcf")&&(e=Xo())&&(a=e.coldConfigData,f=e.coldHashData,e=e.hotHashData,a&&f&&e&&b&&(b.client.configInfo=b.client.configInfo||{},b.client.configInfo.coldConfigData=a,b.client.configInfo.coldHashData=f,b.client.configInfo.hotHashData=e));P("DELEGATED_SESSION_ID")&&!R("pageid_as_header_web")&&(b.user={onBehalfOfUser:P("DELEGATED_SESSION_ID")});!R("fill_delegate_context_in_gel_killswitch")&&(a=P("INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT"))&&
(b.user=Object.assign({},b.user,{serializedDelegationContext:a}));a=Object;f=a.assign;e=b.client;d={};c=v(Object.entries(el(P("DEVICE",""))));for(var g=c.next();!g.done;g=c.next()){var h=v(g.value);g=h.next().value;h=h.next().value;"cbrand"===g?d.deviceMake=h:"cmodel"===g?d.deviceModel=h:"cbr"===g?d.browserName=h:"cbrver"===g?d.browserVersion=h:"cos"===g?d.osName=h:"cosver"===g?d.osVersion=h:"cplatform"===g&&(d.platform=h)}b.client=f.call(a,e,d);return b}
function ap(a,b,c){c=void 0===c?{}:c;var d={};P("EOM_VISITOR_DATA")?d={"X-Goog-EOM-Visitor-Id":P("EOM_VISITOR_DATA")}:d={"X-Goog-Visitor-Id":c.visitorData||P("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;b=c.authorization||P("AUTHORIZATION");b||(a?b="Bearer "+D("gapi.auth.getToken")().Mf:(a=Ul(Tl()),R("pageid_as_header_web")||delete a["X-Goog-PageId"],d=Object.assign({},d,a)));b&&(d.Authorization=b);return d}
;function bp(a,b){this.version=a;this.args=b}
bp.prototype.serialize=function(){return{version:this.version,args:this.args}};function cp(a,b){this.topic=a;this.h=b}
cp.prototype.toString=function(){return this.topic};var dp=D("ytPubsub2Pubsub2Instance")||new K;K.prototype.subscribe=K.prototype.subscribe;K.prototype.unsubscribeByKey=K.prototype.Fb;K.prototype.publish=K.prototype.Ya;K.prototype.clear=K.prototype.clear;C("ytPubsub2Pubsub2Instance",dp);var ep=D("ytPubsub2Pubsub2SubscribedKeys")||{};C("ytPubsub2Pubsub2SubscribedKeys",ep);var fp=D("ytPubsub2Pubsub2TopicToKeys")||{};C("ytPubsub2Pubsub2TopicToKeys",fp);var gp=D("ytPubsub2Pubsub2IsAsync")||{};C("ytPubsub2Pubsub2IsAsync",gp);
C("ytPubsub2Pubsub2SkipSubKey",null);function hp(a,b){var c=ip();c&&c.publish.call(c,a.toString(),a,b)}
function jp(a){var b=kp,c=ip();if(!c)return 0;var d=c.subscribe(b.toString(),function(e,f){var g=D("ytPubsub2Pubsub2SkipSubKey");g&&g==d||(g=function(){if(ep[d])try{if(f&&b instanceof cp&&b!=e)try{var h=b.h,k=f;if(!k.args||!k.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");try{if(!h.Wa){var l=new h;h.Wa=l.version}var n=h.Wa}catch(z){}if(!n||k.version!=n)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");try{n=Reflect;var p=n.construct;
var t=k.args,r=t.length;if(0<r){var x=Array(r);for(k=0;k<r;k++)x[k]=t[k];var y=x}else y=[];f=p.call(n,h,y)}catch(z){throw z.message="yt.pubsub2.Data.deserialize(): "+z.message,z;}}catch(z){throw z.message="yt.pubsub2.pubsub2 cross-binary conversion error for "+b.toString()+": "+z.message,z;}a.call(window,f)}catch(z){Xk(z)}},gp[b.toString()]?D("yt.scheduler.instance")?ti.oa(g):ql(g,0):g())});
ep[d]=!0;fp[b.toString()]||(fp[b.toString()]=[]);fp[b.toString()].push(d);return d}
function lp(){var a=mp,b=jp(function(c){a.apply(void 0,arguments);np(b)});
return b}
function np(a){var b=ip();b&&("number"===typeof a&&(a=[a]),eb(a,function(c){b.unsubscribeByKey(c);delete ep[c]}))}
function ip(){return D("ytPubsub2Pubsub2Instance")}
;function op(a,b,c){c=void 0===c?{sampleRate:.1}:c;Math.random()<Math.min(.02,c.sampleRate/100)&&hp("meta_logging_csi_event",{timerName:a,kg:b})}
;var pp=void 0,qp=void 0;function rp(){if(!qp){var a=P("WORKER_SERIALIZATION_URL");qp=a?(a=a.privateDoNotAccessOrElseTrustedResourceUrlWrappedValue)?Gb(a):null:null}return qp||void 0}
function sp(){var a=rp();pp||void 0===a||(pp=new Worker(Eb(a),void 0));return pp}
;var tp=ll("max_body_size_to_compress",5E5),up=ll("min_body_size_to_compress",500),vp=!0,wp=0,xp=0,yp=ll("compression_performance_threshold_lr",250),zp=ll("slow_compressions_before_abandon_count",4),Ap=!1,Bp=new Map,Cp=1,Dp=!0;function Ep(){if("function"===typeof Worker&&rp()&&!Ap){var a=function(c){c=c.data;if("gzippedGelBatch"===c.op){var d=Bp.get(c.key);d&&(Fp(c.gzippedBatch,d.latencyPayload,d.url,d.options,d.sendFn),Bp.delete(c.key))}},b=sp();
b&&(b.addEventListener("message",a),b.onerror=function(){Bp.clear()},Ap=!0)}}
function Gp(a,b,c,d,e){e=void 0===e?!1:e;var f={startTime:U(),ticks:{},infos:{}};if(vp)try{var g=Hp(b);if(null!=g&&(g>tp||g<up))d(a,c);else{if(R("gzip_gel_with_worker")&&(R("initial_gzip_use_main_thread")&&!Dp||!R("initial_gzip_use_main_thread"))){Ap||Ep();var h=sp();if(h&&!e){Bp.set(Cp,{latencyPayload:f,url:a,options:c,sendFn:d});h.postMessage({op:"gelBatchToGzip",serializedBatch:b,key:Cp});Cp++;return}}var k=tk(oi(b));Fp(k,f,a,c,d)}}catch(l){Yk(l),d(a,c)}else d(a,c)}
function Fp(a,b,c,d,e){Dp=!1;var f=U();b.ticks.gelc=f;xp++;R("disable_compression_due_to_performance_degredation")&&f-b.startTime>=yp&&(wp++,R("abandon_compression_after_N_slow_zips")?xp===ll("compression_disable_point")&&wp>zp&&(vp=!1):vp=!1);Ip(b);d.headers||(d.headers={});d.headers["Content-Encoding"]="gzip";d.postBody=a;d.postParams=void 0;e(c,d)}
function Jp(a){var b=void 0===b?!1:b;var c=void 0===c?!1:c;var d=U(),e={startTime:d,ticks:{},infos:{}},f=b?D("yt.logging.gzipForFetch",!1):!0;if(vp&&f){if(!a.body)return a;try{var g=c?a.body:"string"===typeof a.body?a.body:JSON.stringify(a.body);f=g;if(!c&&"string"===typeof g){var h=Hp(g);if(null!=h&&(h>tp||h<up))return a;f=tk(oi(g),b?{level:1}:void 0);var k=U();e.ticks.gelc=k;if(b){xp++;if((R("disable_compression_due_to_performance_degredation")||R("disable_compression_due_to_performance_degradation_lr"))&&
k-d>=yp)if(wp++,R("abandon_compression_after_N_slow_zips")||R("abandon_compression_after_N_slow_zips_lr")){b=wp/xp;var l=zp/ll("compression_disable_point");0<xp&&0===xp%ll("compression_disable_point")&&b>=l&&(vp=!1)}else vp=!1;Ip(e)}}a.headers=Object.assign({},{"Content-Encoding":"gzip"},a.headers||{});a.body=f;return a}catch(n){return Yk(n),a}}else return a}
function Hp(a){try{return(new Blob(a.split(""))).size}catch(b){return Yk(b),null}}
function Ip(a){R("gel_compression_csi_killswitch")||!R("log_gel_compression_latency")&&!R("log_gel_compression_latency_lr")||op("gel_compression",a,{sampleRate:.1})}
;function Kp(a){a=Object.assign({},a);delete a.Authorization;var b=Bg();if(b){var c=new Bi;c.update(P("INNERTUBE_API_KEY"));c.update(b);a.hash=Ge(c.digest(),3)}return a}
;var Lp;function Mp(){Lp||(Lp=new $m("yt.innertube"));return Lp}
function Np(a,b,c,d){if(d)return null;d=Mp().get("nextId",!0)||1;var e=Mp().get("requests",!0)||{};e[d]={method:a,request:b,authState:Kp(c),requestTime:Math.round(U())};Mp().set("nextId",d+1,86400,!0);Mp().set("requests",e,86400,!0);return d}
function Op(a){var b=Mp().get("requests",!0)||{};delete b[a];Mp().set("requests",b,86400,!0)}
function Pp(a){var b=Mp().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(U())-d.requestTime)){var e=d.authState,f=Kp(ap(!1));rb(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(U())),Qp(a,d.method,e,{}));delete b[c]}}Mp().set("requests",b,86400,!0)}}
;function Rp(a){this.Wb=this.h=!1;this.potentialEsfErrorCounter=this.i=0;this.handleError=function(){};
this.tb=function(){};
this.now=Date.now;this.Lb=!1;var b;this.Dd=null!=(b=a.Dd)?b:100;var c;this.xd=null!=(c=a.xd)?c:1;var d;this.vd=null!=(d=a.vd)?d:2592E6;var e;this.td=null!=(e=a.td)?e:12E4;var f;this.wd=null!=(f=a.wd)?f:5E3;var g;this.T=null!=(g=a.T)?g:void 0;this.cc=!!a.cc;var h;this.Zb=null!=(h=a.Zb)?h:.1;var k;this.mc=null!=(k=a.mc)?k:10;a.handleError&&(this.handleError=a.handleError);a.tb&&(this.tb=a.tb);a.Lb&&(this.Lb=a.Lb);a.Wb&&(this.Wb=a.Wb);this.U=a.U;this.Da=a.Da;this.ba=a.ba;this.aa=a.aa;this.sendFn=a.sendFn;
this.Lc=a.Lc;this.Kc=a.Kc;Sp(this)&&(!this.U||this.U("networkless_logging"))&&Tp(this)}
function Tp(a){Sp(a)&&!a.Lb&&(a.h=!0,a.cc&&Math.random()<=a.Zb&&a.ba.Sd(a.T),Up(a),a.aa.wa()&&a.Ub(),a.aa.listen(a.Lc,a.Ub.bind(a)),a.aa.listen(a.Kc,a.Zc.bind(a)))}
m=Rp.prototype;m.writeThenSend=function(a,b){var c=this;b=void 0===b?{}:b;if(Sp(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.ba.set(d,this.T).then(function(e){d.id=e;c.aa.wa()&&Vp(c,d)}).catch(function(e){Vp(c,d);
Wp(c,e)})}else this.sendFn(a,b)};
m.sendThenWrite=function(a,b,c){var d=this;b=void 0===b?{}:b;if(Sp(this)&&this.h){var e={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.U&&this.U("nwl_skip_retry")&&(e.skipRetry=c);if(this.aa.wa()||this.U&&this.U("nwl_aggressive_send_then_write")&&!e.skipRetry){if(!e.skipRetry){var f=b.onError?b.onError:function(){};
b.onError=function(g,h){return A(function(k){if(1==k.h)return k.yield(d.ba.set(e,d.T).catch(function(l){Wp(d,l)}),2);
f(g,h);k.h=0})}}this.sendFn(a,b,e.skipRetry)}else this.ba.set(e,this.T).catch(function(g){d.sendFn(a,b,e.skipRetry);
Wp(d,g)})}else this.sendFn(a,b,this.U&&this.U("nwl_skip_retry")&&c)};
m.sendAndWrite=function(a,b){var c=this;b=void 0===b?{}:b;if(Sp(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0},e=!1,f=b.onSuccess?b.onSuccess:function(){};
d.options.onSuccess=function(g,h){void 0!==d.id?c.ba.rb(d.id,c.T):e=!0;c.aa.hb&&c.U&&c.U("vss_network_hint")&&c.aa.hb(!0);f(g,h)};
this.sendFn(d.url,d.options,void 0,!0);this.ba.set(d,this.T).then(function(g){d.id=g;e&&c.ba.rb(d.id,c.T)}).catch(function(g){Wp(c,g)})}else this.sendFn(a,b,void 0,!0)};
m.Ub=function(){var a=this;if(!Sp(this))throw Error("IndexedDB is not supported: throttleSend");this.i||(this.i=this.Da.oa(function(){var b;return A(function(c){if(1==c.h)return c.yield(a.ba.jd("NEW",a.T),2);if(3!=c.h)return b=c.i,b?c.yield(Vp(a,b),3):(a.Zc(),c.return());a.i&&(a.i=0,a.Ub());c.h=0})},this.Dd))};
m.Zc=function(){this.Da.qa(this.i);this.i=0};
function Vp(a,b){var c;return A(function(d){switch(d.h){case 1:if(!Sp(a))throw Error("IndexedDB is not supported: immediateSend");if(void 0===b.id){d.v(2);break}return d.yield(a.ba.te(b.id,a.T),3);case 3:(c=d.i)||a.tb(Error("The request cannot be found in the database."));case 2:if(Xp(a,b,a.vd)){d.v(4);break}a.tb(Error("Networkless Logging: Stored logs request expired age limit"));if(void 0===b.id){d.v(5);break}return d.yield(a.ba.rb(b.id,a.T),5);case 5:return d.return();case 4:b.skipRetry||(b=Yp(a,
b));if(!b){d.v(0);break}if(!b.skipRetry||void 0===b.id){d.v(8);break}return d.yield(a.ba.rb(b.id,a.T),8);case 8:a.sendFn(b.url,b.options,!!b.skipRetry),d.h=0}})}
function Yp(a,b){if(!Sp(a))throw Error("IndexedDB is not supported: updateRequestHandlers");var c=b.options.onError?b.options.onError:function(){};
b.options.onError=function(e,f){var g,h,k,l;return A(function(n){switch(n.h){case 1:g=Zp(f);(h=$p(f))&&a.U&&a.U("web_enable_error_204")&&a.handleError(Error("Request failed due to compression"),b.url,f);if(!(a.U&&a.U("nwl_consider_error_code")&&g||a.U&&!a.U("nwl_consider_error_code")&&a.potentialEsfErrorCounter<=a.mc)){n.v(2);break}if(!a.aa.oc){n.v(3);break}return n.yield(a.aa.oc(),3);case 3:if(a.aa.wa()){n.v(2);break}c(e,f);if(!a.U||!a.U("nwl_consider_error_code")||void 0===(null==(k=b)?void 0:k.id)){n.v(6);
break}return n.yield(a.ba.Oc(b.id,a.T,!1),6);case 6:return n.return();case 2:if(a.U&&a.U("nwl_consider_error_code")&&!g&&a.potentialEsfErrorCounter>a.mc)return n.return();a.potentialEsfErrorCounter++;if(void 0===(null==(l=b)?void 0:l.id)){n.v(8);break}return b.sendCount<a.xd?n.yield(a.ba.Oc(b.id,a.T,!0,h?!1:void 0),12):n.yield(a.ba.rb(b.id,a.T),8);case 12:a.Da.oa(function(){a.aa.wa()&&a.Ub()},a.wd);
case 8:c(e,f),n.h=0}})};
var d=b.options.onSuccess?b.options.onSuccess:function(){};
b.options.onSuccess=function(e,f){var g;return A(function(h){if(1==h.h)return void 0===(null==(g=b)?void 0:g.id)?h.v(2):h.yield(a.ba.rb(b.id,a.T),2);a.aa.hb&&a.U&&a.U("vss_network_hint")&&a.aa.hb(!0);d(e,f);h.h=0})};
return b}
function Xp(a,b,c){b=b.timestamp;return a.now()-b>=c?!1:!0}
function Up(a){if(!Sp(a))throw Error("IndexedDB is not supported: retryQueuedRequests");a.ba.jd("QUEUED",a.T).then(function(b){b&&!Xp(a,b,a.td)?a.Da.oa(function(){return A(function(c){if(1==c.h)return void 0===b.id?c.v(2):c.yield(a.ba.Oc(b.id,a.T),2);Up(a);c.h=0})}):a.aa.wa()&&a.Ub()})}
function Wp(a,b){a.Jd&&!a.aa.wa()?a.Jd(b):a.handleError(b)}
function Sp(a){return!!a.T||a.Wb}
function Zp(a){var b;return(a=null==a?void 0:null==(b=a.error)?void 0:b.code)&&400<=a&&599>=a?!1:!0}
function $p(a){var b;a=null==a?void 0:null==(b=a.error)?void 0:b.code;return!(400!==a&&415!==a)}
;var aq;
function bq(){if(aq)return aq();var a={};aq=Ko("LogsDatabaseV2",{Cb:(a.LogsRequestsStore={Hb:2},a),pc:!1,upgrade:function(b,c,d){c(2)&&Qn(b,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0});c(3);c(5)&&(d=d.objectStore("LogsRequestsStore"),d.h.indexNames.contains("newRequest")&&d.h.deleteIndex("newRequest"),Xn(d,"newRequestV2",["status","interface","timestamp"]));c(7)&&b.h.objectStoreNames.contains("sapisid")&&b.h.deleteObjectStore("sapisid");c(9)&&b.h.objectStoreNames.contains("SWHealthLog")&&b.h.deleteObjectStore("SWHealthLog")},
version:9});return aq()}
;function cq(a){return jo(bq(),a)}
function dq(a,b){var c,d,e,f;return A(function(g){if(1==g.h)return c={startTime:U(),infos:{transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},ticks:{}},g.yield(cq(b),2);if(3!=g.h)return d=g.i,e=Object.assign({},a,{options:JSON.parse(JSON.stringify(a.options)),interface:P("INNERTUBE_CONTEXT_CLIENT_NAME",0)}),g.yield(Sn(d,"LogsRequestsStore",e),3);f=g.i;c.ticks.tc=U();eq(c);return g.return(f)})}
function fq(a,b){var c,d,e,f,g,h,k;return A(function(l){if(1==l.h)return c={startTime:U(),infos:{transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},ticks:{}},l.yield(cq(b),2);if(3!=l.h)return d=l.i,e=P("INNERTUBE_CONTEXT_CLIENT_NAME",0),f=[a,e,0],g=[a,e,U()],h=IDBKeyRange.bound(f,g),k=void 0,l.yield(Pn(d,["LogsRequestsStore"],{mode:"readwrite",ia:!0},function(n){return bo(n.objectStore("LogsRequestsStore").index("newRequestV2"),{query:h,direction:"prev"},function(p){p.getValue()&&(k=p.getValue(),"NEW"===
a&&(k.status="QUEUED",p.update(k)))})}),3);
c.ticks.tc=U();eq(c);return l.return(k)})}
function gq(a,b){var c;return A(function(d){if(1==d.h)return d.yield(cq(b),2);c=d.i;return d.return(Pn(c,["LogsRequestsStore"],{mode:"readwrite",ia:!0},function(e){var f=e.objectStore("LogsRequestsStore");return f.get(a).then(function(g){if(g)return g.status="QUEUED",Ln(f.h.put(g,void 0)).then(function(){return g})})}))})}
function hq(a,b,c,d){c=void 0===c?!0:c;var e;return A(function(f){if(1==f.h)return f.yield(cq(b),2);e=f.i;return f.return(Pn(e,["LogsRequestsStore"],{mode:"readwrite",ia:!0},function(g){var h=g.objectStore("LogsRequestsStore");return h.get(a).then(function(k){return k?(k.status="NEW",c&&(k.sendCount+=1),void 0!==d&&(k.options.compress=d),Ln(h.h.put(k,void 0)).then(function(){return k})):Fn.resolve(void 0)})}))})}
function iq(a,b){var c;return A(function(d){if(1==d.h)return d.yield(cq(b),2);c=d.i;return d.return(c.delete("LogsRequestsStore",a))})}
function jq(a){var b,c;return A(function(d){if(1==d.h)return d.yield(cq(a),2);b=d.i;c=U()-2592E6;return d.yield(Pn(b,["LogsRequestsStore"],{mode:"readwrite",ia:!0},function(e){return Zn(e.objectStore("LogsRequestsStore"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function kq(){A(function(a){return a.yield(Go(),0)})}
function eq(a){R("nwl_csi_killswitch")||op("networkless_performance",a,{sampleRate:1})}
;var lq={accountStateChangeSignedIn:23,accountStateChangeSignedOut:24,delayedEventMetricCaptured:11,latencyActionBaselined:6,latencyActionInfo:7,latencyActionTicked:5,offlineTransferStatusChanged:2,offlineImageDownload:335,playbackStartStateChanged:9,systemHealthCaptured:3,mangoOnboardingCompleted:10,mangoPushNotificationReceived:230,mangoUnforkDbMigrationError:121,mangoUnforkDbMigrationSummary:122,mangoUnforkDbMigrationPreunforkDbVersionNumber:133,mangoUnforkDbMigrationPhoneMetadata:134,mangoUnforkDbMigrationPhoneStorage:135,
mangoUnforkDbMigrationStep:142,mangoAsyncApiMigrationEvent:223,mangoDownloadVideoResult:224,mangoHomepageVideoCount:279,mangoHomeV3State:295,mangoImageClientCacheHitEvent:273,sdCardStatusChanged:98,framesDropped:12,thumbnailHovered:13,deviceRetentionInfoCaptured:14,thumbnailLoaded:15,backToAppEvent:318,streamingStatsCaptured:17,offlineVideoShared:19,appCrashed:20,youThere:21,offlineStateSnapshot:22,mdxSessionStarted:25,mdxSessionConnected:26,mdxSessionDisconnected:27,bedrockResourceConsumptionSnapshot:28,
nextGenWatchWatchSwiped:29,kidsAccountsSnapshot:30,zeroStepChannelCreated:31,tvhtml5SearchCompleted:32,offlineSharePairing:34,offlineShareUnlock:35,mdxRouteDistributionSnapshot:36,bedrockRepetitiveActionTimed:37,unpluggedDegradationInfo:229,uploadMp4HeaderMoved:38,uploadVideoTranscoded:39,uploadProcessorStarted:46,uploadProcessorEnded:47,uploadProcessorReady:94,uploadProcessorRequirementPending:95,uploadProcessorInterrupted:96,uploadFrontendEvent:241,assetPackDownloadStarted:41,assetPackDownloaded:42,
assetPackApplied:43,assetPackDeleted:44,appInstallAttributionEvent:459,playbackSessionStopped:45,adBlockerMessagingShown:48,distributionChannelCaptured:49,dataPlanCpidRequested:51,detailedNetworkTypeCaptured:52,sendStateUpdated:53,receiveStateUpdated:54,sendDebugStateUpdated:55,receiveDebugStateUpdated:56,kidsErrored:57,mdxMsnSessionStatsFinished:58,appSettingsCaptured:59,mdxWebSocketServerHttpError:60,mdxWebSocketServer:61,startupCrashesDetected:62,coldStartInfo:435,offlinePlaybackStarted:63,liveChatMessageSent:225,
liveChatUserPresent:434,liveChatBeingModerated:457,liveCreationCameraUpdated:64,liveCreationEncodingCaptured:65,liveCreationError:66,liveCreationHealthUpdated:67,liveCreationVideoEffectsCaptured:68,liveCreationStageOccured:75,liveCreationBroadcastScheduled:123,liveCreationArchiveReplacement:149,liveCreationCostreamingConnection:421,liveCreationStreamWebrtcStats:288,mdxSessionRecoveryStarted:69,mdxSessionRecoveryCompleted:70,mdxSessionRecoveryStopped:71,visualElementShown:72,visualElementHidden:73,
visualElementGestured:78,visualElementStateChanged:208,screenCreated:156,playbackAssociated:202,visualElementAttached:215,playbackContextEvent:214,cloudCastingPlaybackStarted:74,webPlayerApiCalled:76,tvhtml5AccountDialogOpened:79,foregroundHeartbeat:80,foregroundHeartbeatScreenAssociated:111,kidsOfflineSnapshot:81,mdxEncryptionSessionStatsFinished:82,playerRequestCompleted:83,liteSchedulerStatistics:84,mdxSignIn:85,spacecastMetadataLookupRequested:86,spacecastBatchLookupRequested:87,spacecastSummaryRequested:88,
spacecastPlayback:89,spacecastDiscovery:90,tvhtml5LaunchUrlComponentChanged:91,mdxBackgroundPlaybackRequestCompleted:92,mdxBrokenAdditionalDataDeviceDetected:93,tvhtml5LocalStorage:97,tvhtml5DeviceStorageStatus:147,autoCaptionsAvailable:99,playbackScrubbingEvent:339,flexyState:100,interfaceOrientationCaptured:101,mainAppBrowseFragmentCache:102,offlineCacheVerificationFailure:103,offlinePlaybackExceptionDigest:217,vrCopresenceStats:104,vrCopresenceSyncStats:130,vrCopresenceCommsStats:137,vrCopresencePartyStats:153,
vrCopresenceEmojiStats:213,vrCopresenceEvent:141,vrCopresenceFlowTransitEvent:160,vrPlaybackEvent:345,kidsAgeGateTracking:105,offlineDelayAllowedTracking:106,mainAppAutoOfflineState:107,videoAsThumbnailDownload:108,videoAsThumbnailPlayback:109,liteShowMore:110,renderingError:118,kidsProfilePinGateTracking:119,abrTrajectory:124,scrollEvent:125,streamzIncremented:126,kidsProfileSwitcherTracking:127,kidsProfileCreationTracking:129,buyFlowStarted:136,mbsConnectionInitiated:138,mbsPlaybackInitiated:139,
mbsLoadChildren:140,liteProfileFetcher:144,mdxRemoteTransaction:146,reelPlaybackError:148,reachabilityDetectionEvent:150,mobilePlaybackEvent:151,courtsidePlayerStateChanged:152,musicPersistentCacheChecked:154,musicPersistentCacheCleared:155,playbackInterrupted:157,playbackInterruptionResolved:158,fixFopFlow:159,anrDetection:161,backstagePostCreationFlowEnded:162,clientError:163,gamingAccountLinkStatusChanged:164,liteHousewarming:165,buyFlowEvent:167,kidsParentalGateTracking:168,kidsSignedOutSettingsStatus:437,
kidsSignedOutPauseHistoryFixStatus:438,tvhtml5WatchdogViolation:444,ypcUpgradeFlow:169,yongleStudy:170,ypcUpdateFlowStarted:171,ypcUpdateFlowCancelled:172,ypcUpdateFlowSucceeded:173,ypcUpdateFlowFailed:174,liteGrowthkitPromo:175,paymentFlowStarted:341,transactionFlowShowPaymentDialog:405,transactionFlowStarted:176,transactionFlowSecondaryDeviceStarted:222,transactionFlowSecondaryDeviceSignedOutStarted:383,transactionFlowCancelled:177,transactionFlowPaymentCallBackReceived:387,transactionFlowPaymentSubmitted:460,
transactionFlowPaymentSucceeded:329,transactionFlowSucceeded:178,transactionFlowFailed:179,transactionFlowPlayBillingConnectionStartEvent:428,transactionFlowSecondaryDeviceSuccess:458,transactionFlowErrorEvent:411,liteVideoQualityChanged:180,watchBreakEnablementSettingEvent:181,watchBreakFrequencySettingEvent:182,videoEffectsCameraPerformanceMetrics:183,adNotify:184,startupTelemetry:185,playbackOfflineFallbackUsed:186,outOfMemory:187,ypcPauseFlowStarted:188,ypcPauseFlowCancelled:189,ypcPauseFlowSucceeded:190,
ypcPauseFlowFailed:191,uploadFileSelected:192,ypcResumeFlowStarted:193,ypcResumeFlowCancelled:194,ypcResumeFlowSucceeded:195,ypcResumeFlowFailed:196,adsClientStateChange:197,ypcCancelFlowStarted:198,ypcCancelFlowCancelled:199,ypcCancelFlowSucceeded:200,ypcCancelFlowFailed:201,ypcCancelFlowGoToPaymentProcessor:402,ypcDeactivateFlowStarted:320,ypcRedeemFlowStarted:203,ypcRedeemFlowCancelled:204,ypcRedeemFlowSucceeded:205,ypcRedeemFlowFailed:206,ypcFamilyCreateFlowStarted:258,ypcFamilyCreateFlowCancelled:259,
ypcFamilyCreateFlowSucceeded:260,ypcFamilyCreateFlowFailed:261,ypcFamilyManageFlowStarted:262,ypcFamilyManageFlowCancelled:263,ypcFamilyManageFlowSucceeded:264,ypcFamilyManageFlowFailed:265,restoreContextEvent:207,embedsAdEvent:327,autoplayTriggered:209,clientDataErrorEvent:210,experimentalVssValidation:211,tvhtml5TriggeredEvent:212,tvhtml5FrameworksFieldTrialResult:216,tvhtml5FrameworksFieldTrialStart:220,musicOfflinePreferences:218,watchTimeSegment:219,appWidthLayoutError:221,accountRegistryChange:226,
userMentionAutoCompleteBoxEvent:227,downloadRecommendationEnablementSettingEvent:228,musicPlaybackContentModeChangeEvent:231,offlineDbOpenCompleted:232,kidsFlowEvent:233,kidsFlowCorpusSelectedEvent:234,videoEffectsEvent:235,unpluggedOpsEogAnalyticsEvent:236,playbackAudioRouteEvent:237,interactionLoggingDebugModeError:238,offlineYtbRefreshed:239,kidsFlowError:240,musicAutoplayOnLaunchAttempted:242,deviceContextActivityEvent:243,deviceContextEvent:244,templateResolutionException:245,musicSideloadedPlaylistServiceCalled:246,
embedsStorageAccessNotChecked:247,embedsHasStorageAccessResult:248,embedsItpPlayedOnReload:249,embedsRequestStorageAccessResult:250,embedsShouldRequestStorageAccessResult:251,embedsRequestStorageAccessState:256,embedsRequestStorageAccessFailedState:257,embedsItpWatchLaterResult:266,searchSuggestDecodingPayloadFailure:252,siriShortcutActivated:253,tvhtml5KeyboardPerformance:254,latencyActionSpan:255,elementsLog:267,ytbFileOpened:268,tfliteModelError:269,apiTest:270,yongleUsbSetup:271,touStrikeInterstitialEvent:272,
liteStreamToSave:274,appBundleClientEvent:275,ytbFileCreationFailed:276,adNotifyFailure:278,ytbTransferFailed:280,blockingRequestFailed:281,liteAccountSelector:282,liteAccountUiCallbacks:283,dummyPayload:284,browseResponseValidationEvent:285,entitiesError:286,musicIosBackgroundFetch:287,mdxNotificationEvent:289,layersValidationError:290,musicPwaInstalled:291,liteAccountCleanup:292,html5PlayerHealthEvent:293,watchRestoreAttempt:294,liteAccountSignIn:296,notaireEvent:298,kidsVoiceSearchEvent:299,adNotifyFilled:300,
delayedEventDropped:301,analyticsSearchEvent:302,systemDarkThemeOptOutEvent:303,flowEvent:304,networkConnectivityBaselineEvent:305,ytbFileImported:306,downloadStreamUrlExpired:307,directSignInEvent:308,lyricImpressionEvent:309,accessibilityStateEvent:310,tokenRefreshEvent:311,genericAttestationExecution:312,tvhtml5VideoSeek:313,unpluggedAutoPause:314,scrubbingEvent:315,bedtimeReminderEvent:317,tvhtml5UnexpectedRestart:319,tvhtml5StabilityTraceEvent:478,tvhtml5OperationHealth:467,tvhtml5WatchKeyEvent:321,
voiceLanguageChanged:322,tvhtml5LiveChatStatus:323,parentToolsCorpusSelectedEvent:324,offerAdsEnrollmentInitiated:325,networkQualityIntervalEvent:326,deviceStartupMetrics:328,heartbeatActionPlayerTransitioned:330,tvhtml5Lifecycle:331,heartbeatActionPlayerHalted:332,adaptiveInlineMutedSettingEvent:333,mainAppLibraryLoadingState:334,thirdPartyLogMonitoringEvent:336,appShellAssetLoadReport:337,tvhtml5AndroidAttestation:338,tvhtml5StartupSoundEvent:340,iosBackgroundRefreshTask:342,iosBackgroundProcessingTask:343,
sliEventBatch:344,postImpressionEvent:346,musicSideloadedPlaylistExport:347,idbUnexpectedlyClosed:348,voiceSearchEvent:349,mdxSessionCastEvent:350,idbQuotaExceeded:351,idbTransactionEnded:352,idbTransactionAborted:353,tvhtml5KeyboardLogging:354,idbIsSupportedCompleted:355,creatorStudioMobileEvent:356,idbDataCorrupted:357,parentToolsAppChosenEvent:358,webViewBottomSheetResized:359,activeStateControllerScrollPerformanceSummary:360,navigatorValidation:361,mdxSessionHeartbeat:362,clientHintsPolyfillDiagnostics:363,
clientHintsPolyfillEvent:364,proofOfOriginTokenError:365,kidsAddedAccountSummary:366,musicWearableDevice:367,ypcRefundFlowEvent:368,tvhtml5PlaybackMeasurementEvent:369,tvhtml5WatermarkMeasurementEvent:370,clientExpGcfPropagationEvent:371,mainAppReferrerIntent:372,leaderLockEnded:373,leaderLockAcquired:374,googleHatsEvent:375,persistentLensLaunchEvent:376,parentToolsChildWelcomeChosenEvent:378,browseThumbnailPreloadEvent:379,finalPayload:380,mdxDialAdditionalDataUpdateEvent:381,webOrchestrationTaskLifecycleRecord:382,
startupSignalEvent:384,accountError:385,gmsDeviceCheckEvent:386,accountSelectorEvent:388,accountUiCallbacks:389,mdxDialAdditionalDataProbeEvent:390,downloadsSearchIcingApiStats:391,downloadsSearchIndexUpdatedEvent:397,downloadsSearchIndexSnapshot:398,dataPushClientEvent:392,kidsCategorySelectedEvent:393,mdxDeviceManagementSnapshotEvent:394,prefetchRequested:395,prefetchableCommandExecuted:396,gelDebuggingEvent:399,webLinkTtsPlayEnd:400,clipViewInvalid:401,persistentStorageStateChecked:403,cacheWipeoutEvent:404,
playerEvent:410,sfvEffectPipelineStartedEvent:412,sfvEffectPipelinePausedEvent:429,sfvEffectPipelineEndedEvent:413,sfvEffectChosenEvent:414,sfvEffectLoadedEvent:415,sfvEffectUserInteractionEvent:465,sfvEffectFirstFrameProcessedLatencyEvent:416,sfvEffectAggregatedFramesProcessedLatencyEvent:417,sfvEffectAggregatedFramesDroppedEvent:418,sfvEffectPipelineErrorEvent:430,sfvEffectGraphFrozenEvent:419,sfvEffectGlThreadBlockedEvent:420,mdeVideoChangedEvent:442,mdePlayerPerformanceMetrics:472,genericClientExperimentEvent:423,
homePreloadTaskScheduled:424,homePreloadTaskExecuted:425,homePreloadCacheHit:426,polymerPropertyChangedInObserver:427,applicationStarted:431,networkCronetRttBatch:432,networkCronetRttSummary:433,repeatChapterLoopEvent:436,seekCancellationEvent:462,lockModeTimeoutEvent:483,offlineTransferStarted:4,musicOfflineMixtapePreferencesChanged:16,mangoDailyNewVideosNotificationAttempt:40,mangoDailyNewVideosNotificationError:77,dtwsPlaybackStarted:112,dtwsTileFetchStarted:113,dtwsTileFetchCompleted:114,dtwsTileFetchStatusChanged:145,
dtwsKeyframeDecoderBufferSent:115,dtwsTileUnderflowedOnNonkeyframe:116,dtwsBackfillFetchStatusChanged:143,dtwsBackfillUnderflowed:117,dtwsAdaptiveLevelChanged:128,blockingVisitorIdTimeout:277,liteSocial:18,mobileJsInvocation:297,biscottiBasedDetection:439,coWatchStateChange:440,embedsVideoDataDidChange:441,shortsFirst:443,cruiseControlEvent:445,qoeClientLoggingContext:446,atvRecommendationJobExecuted:447,tvhtml5UserFeedback:448,producerProjectCreated:449,producerProjectOpened:450,producerProjectDeleted:451,
producerProjectElementAdded:453,producerProjectElementRemoved:454,tvhtml5ShowClockEvent:455,deviceCapabilityCheckMetrics:456,youtubeClearcutEvent:461,offlineBrowseFallbackEvent:463,getCtvTokenEvent:464,startupDroppedFramesSummary:466,screenshotEvent:468,miniAppPlayEvent:469,elementsDebugCounters:470,fontLoadEvent:471,webKillswitchReceived:473,webKillswitchExecuted:474,cameraOpenEvent:475,manualSmoothnessMeasurement:476,tvhtml5AppQualityEvent:477,polymerPropertyAccessEvent:479,miniAppSdkUsage:480,
cobaltTelemetryEvent:481,crossDevicePlayback:482,channelCreatedWithObakeImage:484,channelEditedWithObakeImage:485,offlineDeleteEvent:486,crossDeviceNotificationTransfer:487};var mq={},nq=Ko("ServiceWorkerLogsDatabase",{Cb:(mq.SWHealthLog={Hb:1},mq),pc:!0,upgrade:function(a,b){b(1)&&Xn(Qn(a,"SWHealthLog",{keyPath:"id",autoIncrement:!0}),"swHealthNewRequest",["interface","timestamp"])},
version:1});function oq(a){return jo(nq(),a)}
function pq(a){var b,c;A(function(d){if(1==d.h)return d.yield(oq(a),2);b=d.i;c=U()-2592E6;return d.yield(Pn(b,["SWHealthLog"],{mode:"readwrite",ia:!0},function(e){return Zn(e.objectStore("SWHealthLog"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function qq(a){var b;return A(function(c){if(1==c.h)return c.yield(oq(a),2);b=c.i;return c.yield(b.clear("SWHealthLog"),0)})}
;var rq={},sq=0;function tq(a){var b=new Image,c=""+sq++;rq[c]=b;b.onload=b.onerror=function(){delete rq[c]};
b.src=a}
;function uq(){this.h=new Map;this.i=!1}
function vq(){if(!uq.h){var a=D("yt.networkRequestMonitor.instance")||new uq;C("yt.networkRequestMonitor.instance",a);uq.h=a}return uq.h}
uq.prototype.requestComplete=function(a,b){b&&(this.i=!0);a=this.removeParams(a);this.h.get(a)||this.h.set(a,b)};
uq.prototype.isEndpointCFR=function(a){a=this.removeParams(a);return(a=this.h.get(a))?!1:!1===a&&this.i?!0:null};
uq.prototype.removeParams=function(a){return a.split("?")[0]};
uq.prototype.removeParams=uq.prototype.removeParams;uq.prototype.isEndpointCFR=uq.prototype.isEndpointCFR;uq.prototype.requestComplete=uq.prototype.requestComplete;uq.getInstance=vq;var wq;function xq(){wq||(wq=new $m("yt.offline"));return wq}
function yq(a){if(R("offline_error_handling")){var b=xq().get("errors",!0)||{};b[a.message]={name:a.name,stack:a.stack};a.level&&(b[a.message].level=a.level);xq().set("errors",b,2592E3,!0)}}
;function zq(){zd.call(this);var a=this;this.j=!1;this.i=si();this.i.listen("networkstatus-online",function(){if(a.j&&R("offline_error_handling")){var b=xq().get("errors",!0);if(b){for(var c in b)if(b[c]){var d=new T(c,"sent via offline_errors");d.name=b[c].name;d.stack=b[c].stack;d.level=b[c].level;Xk(d)}xq().set("errors",{},2592E3,!0)}}})}
w(zq,zd);function Aq(){if(!zq.h){var a=D("yt.networkStatusManager.instance")||new zq;C("yt.networkStatusManager.instance",a);zq.h=a}return zq.h}
m=zq.prototype;m.wa=function(){return this.i.wa()};
m.hb=function(a){this.i.i=a};
m.ge=function(){var a=window.navigator.onLine;return void 0===a?!0:a};
m.Xd=function(){this.j=!0};
m.listen=function(a,b){return this.i.listen(a,b)};
m.oc=function(a){a=qi(this.i,a);a.then(function(b){R("use_cfr_monitor")&&vq().requestComplete("generate_204",b)});
return a};
zq.prototype.sendNetworkCheckRequest=zq.prototype.oc;zq.prototype.listen=zq.prototype.listen;zq.prototype.enableErrorFlushing=zq.prototype.Xd;zq.prototype.getWindowStatus=zq.prototype.ge;zq.prototype.networkStatusHint=zq.prototype.hb;zq.prototype.isNetworkAvailable=zq.prototype.wa;zq.getInstance=Aq;function Bq(a){a=void 0===a?{}:a;zd.call(this);var b=this;this.i=this.m=0;this.j=Aq();var c=D("yt.networkStatusManager.instance.listen").bind(this.j);c&&(a.rateLimit?(this.rateLimit=a.rateLimit,c("networkstatus-online",function(){Cq(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){Cq(b,"publicytnetworkstatus-offline")})):(c("networkstatus-online",function(){Ad(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){Ad(b,"publicytnetworkstatus-offline")})))}
w(Bq,zd);Bq.prototype.wa=function(){var a=D("yt.networkStatusManager.instance.isNetworkAvailable");return a?a.bind(this.j)():!0};
Bq.prototype.hb=function(a){var b=D("yt.networkStatusManager.instance.networkStatusHint").bind(this.j);b&&b(a)};
Bq.prototype.oc=function(a){var b=this,c;return A(function(d){c=D("yt.networkStatusManager.instance.sendNetworkCheckRequest").bind(b.j);return R("skip_network_check_if_cfr")&&vq().isEndpointCFR("generate_204")?d.return(new Promise(function(e){var f;b.hb((null==(f=window.navigator)?void 0:f.onLine)||!0);e(b.wa())})):c?d.return(c(a)):d.return(!0)})};
function Cq(a,b){a.rateLimit?a.i?(ti.qa(a.m),a.m=ti.oa(function(){a.l!==b&&(Ad(a,b),a.l=b,a.i=U())},a.rateLimit-(U()-a.i))):(Ad(a,b),a.l=b,a.i=U()):Ad(a,b)}
;var Dq;function Eq(){var a=Rp.call;Dq||(Dq=new Bq({Xf:!0,Qf:!0}));a.call(Rp,this,{ba:{Sd:jq,rb:iq,jd:fq,te:gq,Oc:hq,set:dq},aa:Dq,handleError:function(b,c,d){var e,f=null==d?void 0:null==(e=d.error)?void 0:e.code;if(400===f||415===f){var g;Yk(new T(b.message,c,null==d?void 0:null==(g=d.error)?void 0:g.code),void 0,void 0,void 0,!0)}else Xk(b)},
tb:Yk,sendFn:Fq,now:U,Jd:yq,Da:Zm(),Lc:"publicytnetworkstatus-online",Kc:"publicytnetworkstatus-offline",cc:!0,Zb:.1,mc:ll("potential_esf_error_limit",10),U:R,Lb:!(om()&&Gq())});this.j=new Ih;R("networkless_immediately_drop_all_requests")&&kq();Ho("LogsDatabaseV2")}
w(Eq,Rp);function Hq(){var a=D("yt.networklessRequestController.instance");a||(a=new Eq,C("yt.networklessRequestController.instance",a),R("networkless_logging")&&wo().then(function(b){a.T=b;Tp(a);a.j.resolve();a.cc&&Math.random()<=a.Zb&&a.T&&pq(a.T);R("networkless_immediately_drop_sw_health_store")&&Iq(a)}));
return a}
Eq.prototype.writeThenSend=function(a,b){b||(b={});om()||(this.h=!1);Rp.prototype.writeThenSend.call(this,a,b)};
Eq.prototype.sendThenWrite=function(a,b,c){b||(b={});om()||(this.h=!1);Rp.prototype.sendThenWrite.call(this,a,b,c)};
Eq.prototype.sendAndWrite=function(a,b){b||(b={});om()||(this.h=!1);Rp.prototype.sendAndWrite.call(this,a,b)};
Eq.prototype.awaitInitialization=function(){return this.j.promise};
function Iq(a){var b;A(function(c){if(!a.T)throw b=Bn("clearSWHealthLogsDb"),b;return c.return(qq(a.T).catch(function(d){a.handleError(d)}))})}
function Fq(a,b,c,d){d=void 0===d?!1:d;b=R("web_fp_via_jspb")?Object.assign({},b):b;R("use_cfr_monitor")&&Jq(a,b);if(R("use_request_time_ms_header"))b.headers&&(b.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(U())));else{var e;if(null==(e=b.postParams)?0:e.requestTimeMs)b.postParams.requestTimeMs=Math.round(U())}if(c&&0===Object.keys(b).length){var f=void 0===f?"":f;var g=void 0===g?!1:g;var h=void 0===h?!1:h;if(a)if(f)Al(a,void 0,"POST",f);else if(P("USE_NET_AJAX_FOR_PING_TRANSPORT",!1))Al(a,
void 0,"GET","",void 0,void 0,g,h);else{b:{try{var k=new $a({url:a});if(k.j&&k.i||k.l){var l=bc(cc(5,a)),n;if(!(n=!l||!l.endsWith("/aclk"))){var p=a.search(pc),t=oc(a,0,"ri",p);if(0>t)var r=null;else{var x=a.indexOf("&",t);if(0>x||x>p)x=p;r=decodeURIComponent(a.slice(t+3,-1!==x?x:0).replace(/\+/g," "))}n="1"!==r}var y=!n;break b}}catch(H){}y=!1}if(y){b:{try{if(window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")){var z=!0;break b}}catch(H){}z=!1}c=z?!0:!1}else c=!1;c||
tq(a)}}else b.compress?b.postBody?("string"!==typeof b.postBody&&(b.postBody=JSON.stringify(b.postBody)),Gp(a,b.postBody,b,xl,d)):Gp(a,JSON.stringify(b.postParams),b,Fl,d):xl(a,b)}
function Jq(a,b){var c=b.onError?b.onError:function(){};
b.onError=function(e,f){vq().requestComplete(a,!1);c(e,f)};
var d=b.onSuccess?b.onSuccess:function(){};
b.onSuccess=function(e,f){vq().requestComplete(a,!0);d(e,f)}}
function Gq(){return"www.youtube-nocookie.com"!==dc(document.location.toString())}
;var Kq=!1,Lq=B.ytNetworklessLoggingInitializationOptions||{isNwlInitialized:Kq};C("ytNetworklessLoggingInitializationOptions",Lq);function Mq(){var a;A(function(b){if(1==b.h)return b.yield(wo(),2);a=b.i;if(!a||!om()&&!R("nwl_init_require_datasync_id_killswitch")||!Gq())return b.v(0);Kq=!0;Lq.isNwlInitialized=Kq;return b.yield(Hq().awaitInitialization(),0)})}
;function Nq(a){var b=this;this.config_=null;a?this.config_=a:Yo()&&(this.config_=Zo());rm(function(){Pp(b)},5E3)}
Nq.prototype.isReady=function(){!this.config_&&Yo()&&(this.config_=Zo());return!!this.config_};
function Qp(a,b,c,d){function e(x){x=void 0===x?!1:x;var y;if(d.retry&&"www.youtube-nocookie.com"!=h&&(x||R("skip_ls_gel_retry")||"application/json"!==g.headers["Content-Type"]||(y=Np(b,c,l,k)),y)){var z=g.onSuccess,H=g.onFetchSuccess;g.onSuccess=function(da,S){Op(y);z(da,S)};
c.onFetchSuccess=function(da,S){Op(y);H(da,S)}}try{if(x&&d.retry&&!d.networklessOptions.bypassNetworkless)g.method="POST",d.networklessOptions.writeThenSend?Hq().writeThenSend(r,g):Hq().sendAndWrite(r,g);
else if(d.compress){var L=!d.networklessOptions.writeThenSend;if(g.postBody){var I=g.postBody;"string"!==typeof I&&(I=JSON.stringify(g.postBody));Gp(r,I,g,xl,L)}else Gp(r,JSON.stringify(g.postParams),g,Fl,L)}else R("web_all_payloads_via_jspb")?xl(r,g):Fl(r,g)}catch(da){if("InvalidAccessError"==da.name)y&&(Op(y),y=0),Yk(Error("An extension is blocking network request."));else throw da;}y&&rm(function(){Pp(a)},5E3)}
!P("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&Yk(new T("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady()){var f=new T("innertube xhrclient not ready",b,c,d);Xk(f);throw f;}var g={headers:d.headers||{},method:"POST",postParams:c,postBody:d.postBody,postBodyFormat:d.postBodyFormat||"JSON",onTimeout:function(){d.onTimeout()},
onFetchTimeout:d.onTimeout,onSuccess:function(x,y){if(d.onSuccess)d.onSuccess(y)},
onFetchSuccess:function(x){if(d.onSuccess)d.onSuccess(x)},
onError:function(x,y){if(d.onError)d.onError(y)},
onFetchError:function(x){if(d.onError)d.onError(x)},
timeout:d.timeout,withCredentials:!0,compress:d.compress};g.headers["Content-Type"]||(g.headers["Content-Type"]="application/json");var h="";(f=a.config_.oe)&&(h=f);var k=a.config_.qe||!1,l=ap(k,h,d);Object.assign(g.headers,l);(f=g.headers.Authorization)&&!h&&k&&(g.headers["x-origin"]=window.location.origin);var n="/youtubei/"+a.config_.innertubeApiVersion+"/"+b,p={alt:"json"},t=a.config_.pe&&f;t=t&&f.startsWith("Bearer");t||(p.key=a.config_.innertubeApiKey);var r=gl(""+h+n,p||{},!0);(D("ytNetworklessLoggingInitializationOptions")?
Lq.isNwlInitialized:Kq)?uo().then(function(x){e(x)}):e(!1)}
;var Oq=0,Pq=Rc?"webkit":Qc?"moz":Oc?"ms":Nc?"o":"";C("ytDomDomGetNextId",D("ytDomDomGetNextId")||function(){return++Oq});var Qq={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function Rq(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.rotation=this.clientY=this.clientX=0;this.scale=1;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in Qq||(this[b]=a[b]);this.scale=a.scale;this.rotation=a.rotation;var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;
if(d)try{d=d.nodeName?d:null}catch(e){d=null}else"mouseover"==this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.h=a.pageX;this.i=a.pageY}}catch(e){}}
function Sq(a){if(document.body&&document.documentElement){var b=document.body.scrollTop+document.documentElement.scrollTop;a.h=a.clientX+(document.body.scrollLeft+document.documentElement.scrollLeft);a.i=a.clientY+b}}
Rq.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
Rq.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
Rq.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var nb=B.ytEventsEventsListeners||{};C("ytEventsEventsListeners",nb);var Tq=B.ytEventsEventsCounter||{count:0};C("ytEventsEventsCounter",Tq);
function Uq(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return mb(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Oa(e[4])&&Oa(d)&&rb(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
var Vq=cb(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function Wq(a,b,c,d){d=void 0===d?{}:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=Uq(a,b,c,d);if(e)return e;e=++Tq.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(h){h=new Rq(h);if(!Jd(h.relatedTarget,function(k){return k==a}))return h.currentTarget=a,h.type=b,c.call(a,h)}:function(h){h=new Rq(h);
h.currentTarget=a;return c.call(a,h)};
g=Wk(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),Vq()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);nb[e]=[a,b,c,g,d];return e}
function Xq(a){a&&("string"==typeof a&&(a=[a]),eb(a,function(b){if(b in nb){var c=nb[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?Vq()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete nb[b]}}))}
;function Yq(a){this.B=a;this.h=null;this.l=0;this.s=null;this.m=0;this.i=[];for(a=0;4>a;a++)this.i.push(0);this.j=0;this.S=Wq(window,"mousemove",Ua(this.W,this));a=Ua(this.R,this);"function"===typeof a&&(a=Wk(a));this.Y=window.setInterval(a,25)}
Xa(Yq,F);Yq.prototype.W=function(a){void 0===a.h&&Sq(a);var b=a.h;void 0===a.i&&Sq(a);this.h=new Fd(b,a.i)};
Yq.prototype.R=function(){if(this.h){var a=U();if(0!=this.l){var b=this.s,c=this.h,d=b.x-c.x;b=b.y-c.y;d=Math.sqrt(d*d+b*b)/(a-this.l);this.i[this.j]=.5<Math.abs((d-this.m)/this.m)?1:0;for(c=b=0;4>c;c++)b+=this.i[c]||0;3<=b&&this.B();this.m=d}this.l=a;this.s=this.h;this.j=(this.j+1)%4}};
Yq.prototype.M=function(){window.clearInterval(this.Y);Xq(this.S)};var Zq={};
function $q(a){var b=void 0===a?{}:a;a=void 0===b.De?!1:b.De;b=void 0===b.Yd?!0:b.Yd;if(null==D("_lact",window)){var c=parseInt(P("LACT"),10);c=isFinite(c)?Date.now()-Math.max(c,0):-1;C("_lact",c,window);C("_fact",c,window);-1==c&&ar();Wq(document,"keydown",ar);Wq(document,"keyup",ar);Wq(document,"mousedown",ar);Wq(document,"mouseup",ar);a?Wq(window,"touchmove",function(){br("touchmove",200)},{passive:!0}):(Wq(window,"resize",function(){br("resize",200)}),b&&Wq(window,"scroll",function(){br("scroll",200)}));
new Yq(function(){br("mouse",100)});
Wq(document,"touchstart",ar,{passive:!0});Wq(document,"touchend",ar,{passive:!0})}}
function br(a,b){Zq[a]||(Zq[a]=!0,ti.oa(function(){ar();Zq[a]=!1},b))}
function ar(){null==D("_lact",window)&&$q();var a=Date.now();C("_lact",a,window);-1==D("_fact",window)&&C("_fact",a,window);(a=D("ytglobal.ytUtilActivityCallback_"))&&a()}
function cr(){var a=D("_lact",window);return null==a?-1:Math.max(Date.now()-a,0)}
;var dr=B.ytPubsubPubsubInstance||new K,er=B.ytPubsubPubsubSubscribedKeys||{},fr=B.ytPubsubPubsubTopicToKeys||{},gr=B.ytPubsubPubsubIsSynchronous||{};function hr(a,b){var c=ir();if(c&&b){var d=c.subscribe(a,function(){var e=arguments;var f=function(){er[d]&&b.apply&&"function"==typeof b.apply&&b.apply(window,e)};
try{gr[a]?f():ql(f,0)}catch(g){Xk(g)}},void 0);
er[d]=!0;fr[a]||(fr[a]=[]);fr[a].push(d);return d}return 0}
function jr(a){var b=ir();b&&("number"===typeof a?a=[a]:"string"===typeof a&&(a=[parseInt(a,10)]),eb(a,function(c){b.unsubscribeByKey(c);delete er[c]}))}
function kr(a,b){var c=ir();c&&c.publish.apply(c,arguments)}
function lr(a){var b=ir();if(b)if(b.clear(a),a)mr(a);else for(var c in fr)mr(c)}
function ir(){return B.ytPubsubPubsubInstance}
function mr(a){fr[a]&&(a=fr[a],eb(a,function(b){er[b]&&delete er[b]}),a.length=0)}
K.prototype.subscribe=K.prototype.subscribe;K.prototype.unsubscribeByKey=K.prototype.Fb;K.prototype.publish=K.prototype.Ya;K.prototype.clear=K.prototype.clear;C("ytPubsubPubsubInstance",dr);C("ytPubsubPubsubTopicToKeys",fr);C("ytPubsubPubsubIsSynchronous",gr);C("ytPubsubPubsubSubscribedKeys",er);var nr=Symbol("injectionDeps");function or(a){this.name=a}
or.prototype.toString=function(){return"InjectionToken("+this.name+")"};
function pr(a){this.key=a}
function qr(){this.h=new Map;this.i=new Map}
qr.prototype.resolve=function(a){return a instanceof pr?rr(this,a.key,[],!0):rr(this,a,[])};
function rr(a,b,c,d){d=void 0===d?!1:d;if(-1<c.indexOf(b))throw Error("Deps cycle for: "+b);if(a.i.has(b))return a.i.get(b);if(!a.h.has(b)){if(d)return;throw Error("No provider for: "+b);}d=a.h.get(b);c.push(b);if(void 0!==d.Gd)var e=d.Gd;else if(d.gf)e=d[nr]?sr(a,d[nr],c):[],e=d.gf.apply(d,ma(e));else if(d.Fd){e=d.Fd;var f=e[nr]?sr(a,e[nr],c):[];e=new (Function.prototype.bind.apply(e,[null].concat(ma(f))))}else throw Error("Could not resolve providers for: "+b);c.pop();d.ig||a.i.set(b,e);return e}
function sr(a,b,c){return b?b.map(function(d){return d instanceof pr?rr(a,d.key,c,!0):rr(a,d,c)}):[]}
;var tr;function ur(){tr||(tr=new qr);return tr}
;var vr=window;function wr(){var a,b;return"h5vcc"in vr&&(null==(a=vr.h5vcc.traceEvent)?0:a.traceBegin)&&(null==(b=vr.h5vcc.traceEvent)?0:b.traceEnd)?1:"performance"in vr&&vr.performance.mark&&vr.performance.measure?2:0}
function xr(a){switch(wr()){case 1:vr.h5vcc.traceEvent.traceBegin("YTLR",a);break;case 2:vr.performance.mark(a+"-start");break;case 0:break;default:Th()}}
function yr(a){switch(wr()){case 1:vr.h5vcc.traceEvent.traceEnd("YTLR",a);break;case 2:var b=a+"-start",c=a+"-end";vr.performance.mark(c);vr.performance.measure(a,b,c);break;case 0:break;default:Th()}}
;var zr=R("web_enable_lifecycle_monitoring")&&0!==wr(),Ar=R("web_enable_lifecycle_monitoring");function Br(a){var b=this;var c=void 0===c?0:c;var d=void 0===d?Zm():d;this.j=c;this.scheduler=d;this.i=new Ih;this.h=a;for(a={eb:0};a.eb<this.h.length;a={Pb:a.Pb,eb:a.eb},a.eb++)a.Pb=this.h[a.eb],c=function(e){return function(){e.Pb.Fc();b.h[e.eb].nc=!0;b.h.every(function(f){return!0===f.nc})&&b.i.resolve()}}(a),d=this.getPriority(a.Pb),d=this.scheduler.Za(c,d),this.h[a.eb]=Object.assign({},a.Pb,{Fc:c,
jobId:d})}
function Cr(a){var b=Array.from(a.h.keys()).sort(function(d,e){return a.getPriority(a.h[e])-a.getPriority(a.h[d])});
b=v(b);for(var c=b.next();!c.done;c=b.next())c=a.h[c.value],void 0===c.jobId||c.nc||(a.scheduler.qa(c.jobId),a.scheduler.Za(c.Fc,10))}
Br.prototype.cancel=function(){for(var a=v(this.h),b=a.next();!b.done;b=a.next())b=b.value,void 0===b.jobId||b.nc||this.scheduler.qa(b.jobId),b.nc=!0;this.i.resolve()};
Br.prototype.getPriority=function(a){var b;return null!=(b=a.priority)?b:this.j};function Dr(a){this.state=a;this.plugins=[];this.l=void 0;this.s={};zr&&xr(this.state)}
m=Dr.prototype;m.install=function(a){this.plugins.push(a);return this};
m.uninstall=function(){var a=this;Ia.apply(0,arguments).forEach(function(b){b=a.plugins.indexOf(b);-1<b&&a.plugins.splice(b,1)})};
m.transition=function(a,b){var c=this;zr&&yr(this.state);var d=this.transitions.find(function(f){return Array.isArray(f.from)?f.from.find(function(g){return g===c.state&&f.to===a}):f.from===c.state&&f.to===a});
if(d){this.j&&(Cr(this.j),this.j=void 0);Er(this,a,b);this.state=a;zr&&xr(this.state);d=d.action.bind(this);var e=this.plugins.filter(function(f){return f[a]}).map(function(f){return f[a]});
d(Fr(this,e),b)}else throw Error("no transition specified from "+this.state+" to "+a);};
function Fr(a,b){var c=b.filter(function(e){return 10===Gr(a,e)}),d=b.filter(function(e){return 10!==Gr(a,e)});
return a.s.hg?function(){var e=Ia.apply(0,arguments);return A(function(f){if(1==f.h)return f.yield(a.Ke.apply(a,[c].concat(ma(e))),2);a.Ad.apply(a,[d].concat(ma(e)));f.h=0})}:function(){var e=Ia.apply(0,arguments);
a.Le.apply(a,[c].concat(ma(e)));a.Ad.apply(a,[d].concat(ma(e)))}}
m.Le=function(a){for(var b=Ia.apply(1,arguments),c=Zm(),d=v(a),e=d.next(),f={};!e.done;f={yb:f.yb},e=d.next())f.yb=e.value,c.Gb(function(g){return function(){Hr(g.yb.name);g.yb.callback.apply(g.yb,ma(b));Ir(g.yb.name)}}(f))};
m.Ke=function(a){var b=Ia.apply(1,arguments),c,d,e,f,g;return A(function(h){1==h.h&&(c=Zm(),d=v(a),e=d.next(),f={});if(3!=h.h){if(e.done)return h.v(0);f.fb=e.value;f.Ib=void 0;g=function(k){return function(){Hr(k.fb.name);var l=k.fb.callback.apply(k.fb,ma(b));"function"===typeof(null==l?void 0:l.then)?k.Ib=l.then(function(){Ir(k.fb.name)}):Ir(k.fb.name)}}(f);
c.Gb(g);return f.Ib?h.yield(f.Ib,3):h.v(3)}f={fb:f.fb,Ib:f.Ib};e=d.next();return h.v(2)})};
m.Ad=function(a){var b=Ia.apply(1,arguments),c=this,d=a.map(function(e){return{Fc:function(){Hr(e.name);e.callback.apply(e,ma(b));Ir(e.name)},
priority:Gr(c,e)}});
d.length&&(this.j=new Br(d))};
function Gr(a,b){var c,d;return null!=(d=null!=(c=a.l)?c:b.priority)?d:0}
function Hr(a){zr&&a&&xr(a)}
function Ir(a){zr&&a&&yr(a)}
function Er(a,b,c){Ar&&console.groupCollapsed&&console.groupEnd&&(console.groupCollapsed("["+a.constructor.name+"] '"+a.state+"' to '"+b+"'"),console.log("with message: ",c),console.groupEnd())}
ia.Object.defineProperties(Dr.prototype,{currentState:{configurable:!0,enumerable:!0,get:function(){return this.state}}});function Jr(a){Dr.call(this,void 0===a?"none":a);this.h=null;this.l=10;this.transitions=[{from:"none",to:"application_navigating",action:this.i},{from:"application_navigating",to:"none",action:this.m},{from:"application_navigating",to:"application_navigating",action:function(){}},
{from:"none",to:"none",action:function(){}}]}
var Kr;w(Jr,Dr);Jr.prototype.i=function(a,b){var c=this;this.h=rm(function(){"application_navigating"===c.currentState&&c.transition("none")},5E3);
a(null==b?void 0:b.event)};
Jr.prototype.m=function(a,b){this.h&&(ti.qa(this.h),this.h=null);a(null==b?void 0:b.event)};
function Lr(){Kr||(Kr=new Jr);return Kr}
;var Mr=[];C("yt.logging.transport.getScrapedGelPayloads",function(){return Mr});function Nr(){this.store={};this.h={}}
Nr.prototype.storePayload=function(a,b){a=Or(a);this.store[a]?this.store[a].push(b):(this.h={},this.store[a]=[b]);return a};
Nr.prototype.smartExtractMatchingEntries=function(a){if(!a.keys.length)return[];for(var b=Pr(this,a.keys.splice(0,1)[0]),c=[],d=0;d<b.length;d++)this.store[b[d]]&&a.sizeLimit&&(this.store[b[d]].length<=a.sizeLimit?(c.push.apply(c,ma(this.store[b[d]])),delete this.store[b[d]]):c.push.apply(c,ma(this.store[b[d]].splice(0,a.sizeLimit))));(null==a?0:a.sizeLimit)&&c.length<(null==a?void 0:a.sizeLimit)&&(a.sizeLimit-=c.length,c.push.apply(c,ma(this.smartExtractMatchingEntries(a))));return c};
Nr.prototype.extractMatchingEntries=function(a){a=Pr(this,a);for(var b=[],c=0;c<a.length;c++)this.store[a[c]]&&(b.push.apply(b,ma(this.store[a[c]])),delete this.store[a[c]]);return b};
Nr.prototype.getSequenceCount=function(a){a=Pr(this,a);for(var b=0,c=0;c<a.length;c++){var d=void 0;b+=(null==(d=this.store[a[c]])?void 0:d.length)||0}return b};
function Pr(a,b){var c=Or(b);if(a.h[c])return a.h[c];var d=Object.keys(a.store)||[];if(1>=d.length&&Or(b)===d[0])return d;for(var e=[],f=0;f<d.length;f++){var g=d[f].split("/");if(Qr(b.auth,g[0])){var h=b.isJspb;Qr(void 0===h?"undefined":h?"true":"false",g[1])&&Qr(b.cttAuthInfo,g[2])&&(h=b.tier,h=void 0===h?"undefined":JSON.stringify(h),Qr(h,g[3])&&e.push(d[f]))}}return a.h[c]=e}
function Qr(a,b){return void 0===a||"undefined"===a?!0:a===b}
Nr.prototype.getSequenceCount=Nr.prototype.getSequenceCount;Nr.prototype.extractMatchingEntries=Nr.prototype.extractMatchingEntries;Nr.prototype.smartExtractMatchingEntries=Nr.prototype.smartExtractMatchingEntries;Nr.prototype.storePayload=Nr.prototype.storePayload;function Or(a){return[void 0===a.auth?"undefined":a.auth,void 0===a.isJspb?"undefined":a.isJspb,void 0===a.cttAuthInfo?"undefined":a.cttAuthInfo,void 0===a.tier?"undefined":a.tier].join("/")}
;function Rr(a,b){if(a)return a[b.name]}
;var Sr=ll("initial_gel_batch_timeout",2E3),Tr=ll("gel_queue_timeout_max_ms",6E4),Ur=Math.pow(2,16)-1,Vr=ll("gel_min_batch_size",5),Wr=void 0;function Xr(){this.l=this.h=this.i=0;this.j=!1}
var Yr=new Xr,Zr=new Xr,$r=new Xr,as=new Xr,bs,cs=!0,ds=B.ytLoggingTransportTokensToCttTargetIds_||{};C("ytLoggingTransportTokensToCttTargetIds_",ds);var es={};function gs(){var a=D("yt.logging.ims");a||(a=new Nr,C("yt.logging.ims",a));return a}
function hs(a,b){if("log_event"===a.endpoint){is();var c=js(a),d=ks(a.payload)||"";a:{if(R("enable_web_tiered_gel")){var e=lq[d||""];var f,g,h,k=null==ur().resolve(new pr(To))?void 0:null==(f=Uo())?void 0:null==(g=f.loggingHotConfig)?void 0:null==(h=g.eventLoggingConfig)?void 0:h.payloadPolicies;if(k)for(f=0;f<k.length;f++)if(k[f].payloadNumber===e){e=k[f];break a}}e=void 0}k=200;if(e){if(!1===e.enabled&&!R("web_payload_policy_disabled_killswitch"))return;k=ls(e.tier);if(400===k){ms(a,b);return}}es[c]=
!0;e={cttAuthInfo:c,isJspb:!1,tier:k};gs().storePayload(e,a.payload);ns(b,c,e,"gelDebuggingEvent"===d)}}
function ns(a,b,c,d){function e(){ps({writeThenSend:!0},R("flush_only_full_queue")?b:void 0,f,c.tier)}
var f=!1;f=void 0===f?!1:f;d=void 0===d?!1:d;a&&(Wr=new a);a=ll("tvhtml5_logging_max_batch_ads_fork")||ll("web_logging_max_batch")||100;var g=U(),h=qs(f,c.tier),k=h.l;d&&(h.j=!0);d=0;c&&(d=gs().getSequenceCount(c));1E3<=d?e():d>=a?bs||(bs=rs(function(){e();bs=void 0},0)):10<=g-k&&(ss(f,c.tier),h.l=g)}
function ms(a,b){if("log_event"===a.endpoint){is();var c=js(a),d=new Map;d.set(c,[a.payload]);var e=ks(a.payload)||"";b&&(Wr=new b);return new Wd(function(f,g){Wr&&Wr.isReady()?ts(d,Wr,f,g,{bypassNetworkless:!0},!0,"gelDebuggingEvent"===e):f()})}}
function js(a){var b="";if(a.dangerousLogToVisitorSession)b="visitorOnlyApprovedKey";else if(a.cttAuthInfo){b=a.cttAuthInfo;var c={};b.videoId?c.videoId=b.videoId:b.playlistId&&(c.playlistId=b.playlistId);ds[a.cttAuthInfo.token]=c;b=a.cttAuthInfo.token}return b}
function ps(a,b,c,d){a=void 0===a?{}:a;c=void 0===c?!1:c;new Wd(function(e,f){var g=qs(c,d),h=g.j;g.j=!1;us(g.i);us(g.h);g.h=0;Wr&&Wr.isReady()?void 0===d&&R("enable_web_tiered_gel")?vs(e,f,a,b,c,300,h):vs(e,f,a,b,c,d,h):(ss(c,d),e())})}
function vs(a,b,c,d,e,f,g){var h=Wr;c=void 0===c?{}:c;e=void 0===e?!1:e;f=void 0===f?200:f;g=void 0===g?!1:g;var k=new Map;var l={isJspb:e,cttAuthInfo:d,tier:f};e={isJspb:e,cttAuthInfo:d};if(void 0!==d)f=R("enable_web_tiered_gel")?gs().smartExtractMatchingEntries({keys:[l,e],sizeLimit:1E3}):gs().extractMatchingEntries(e),k.set(d,f);else for(d=v(Object.keys(es)),l=d.next();!l.done;l=d.next())l=l.value,e=R("enable_web_tiered_gel")?gs().smartExtractMatchingEntries({keys:[{isJspb:!1,cttAuthInfo:l,tier:f},
{isJspb:!1,cttAuthInfo:l}],sizeLimit:1E3}):gs().extractMatchingEntries({isJspb:!1,cttAuthInfo:l}),0<e.length&&k.set(l,e),(R("web_fp_via_jspb_and_json")&&c.writeThenSend||!R("web_fp_via_jspb_and_json"))&&delete es[l];ts(k,h,a,b,c,!1,g)}
function ss(a,b){function c(){ps({writeThenSend:!0},void 0,a,b)}
a=void 0===a?!1:a;b=void 0===b?200:b;var d=qs(a,b),e=d===as||d===$r?5E3:Tr;R("web_gel_timeout_cap")&&!d.h&&(e=rs(function(){c()},e),d.h=e);
us(d.i);e=P("LOGGING_BATCH_TIMEOUT",ll("web_gel_debounce_ms",1E4));R("shorten_initial_gel_batch_timeout")&&cs&&(e=Sr);e=rs(function(){0<ll("gel_min_batch_size")?gs().getSequenceCount({cttAuthInfo:void 0,isJspb:a,tier:b})>=Vr&&c():c()},e);
d.i=e}
function ts(a,b,c,d,e,f,g){e=void 0===e?{}:e;var h=Math.round(U()),k=a.size,l=(void 0===g?0:g)&&R("vss_through_gel_video_stats")?"video_stats":"log_event";a=v(a);var n=a.next();for(g={};!n.done;g={ic:g.ic,batchRequest:g.batchRequest,dangerousLogToVisitorSession:g.dangerousLogToVisitorSession,kc:g.kc,jc:g.jc},n=a.next()){var p=v(n.value);n=p.next().value;p=p.next().value;g.batchRequest=tb({context:$o(b.config_||Zo())});if(!Na(p)&&!R("throw_err_when_logevent_malformed_killswitch")){d();break}g.batchRequest.events=
p;(p=ds[n])&&ws(g.batchRequest,n,p);delete ds[n];g.dangerousLogToVisitorSession="visitorOnlyApprovedKey"===n;xs(g.batchRequest,h,g.dangerousLogToVisitorSession);R("always_send_and_write")&&(e.writeThenSend=!1);g.kc=function(t){R("start_client_gcf")&&ti.oa(function(){return A(function(r){return r.yield(ys(t),0)})});
k--;k||c()};
g.ic=0;g.jc=function(t){return function(){t.ic++;if(e.bypassNetworkless&&1===t.ic)try{Qp(b,l,t.batchRequest,zs({writeThenSend:!0},t.dangerousLogToVisitorSession,t.kc,t.jc,f)),cs=!1}catch(r){Xk(r),d()}k--;k||c()}}(g);
try{Qp(b,l,g.batchRequest,zs(e,g.dangerousLogToVisitorSession,g.kc,g.jc,f)),cs=!1}catch(t){Xk(t),d()}}}
function zs(a,b,c,d,e){a={retry:!0,onSuccess:c,onError:d,networklessOptions:a,dangerousLogToVisitorSession:b,Nf:!!e,headers:{},postBodyFormat:"",postBody:"",compress:R("compress_gel")||R("compress_gel_lr")};As()&&(a.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(U())));return a}
function xs(a,b,c){As()||(a.requestTimeMs=String(b));R("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);!c&&(b=P("EVENT_ID"))&&((c=P("BATCH_CLIENT_COUNTER")||0)||(c=Math.floor(Math.random()*Ur/2)),c++,c>Ur&&(c=1),Sk("BATCH_CLIENT_COUNTER",c),a.serializedClientEventId={serializedEventId:b,clientCounter:String(c)})}
function ws(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
function is(){var a;(a=D("yt.logging.transport.enableScrapingForTest"))||(a=kl("il_payload_scraping"),a="enable_il_payload_scraping"!==(void 0!==a?String(a):""));a||(Mr=[],C("yt.logging.transport.enableScrapingForTest",!0),C("yt.logging.transport.scrapedPayloadsForTesting",Mr),C("yt.logging.transport.payloadToScrape","visualElementShown visualElementHidden visualElementAttached screenCreated visualElementGestured visualElementStateChanged".split(" ")),C("yt.logging.transport.getScrapedPayloadFromClientEventsFunction"),
C("yt.logging.transport.scrapeClientEvent",!0))}
function As(){return R("use_request_time_ms_header")||R("lr_use_request_time_ms_header")}
function rs(a,b){return R("transport_use_scheduler")?R("logging_avoid_blocking_during_navigation")||R("lr_logging_avoid_blocking_during_navigation")?rm(function(){if("none"===Lr().currentState)a();else{var c={};Lr().install((c.none={callback:a},c))}},b):rm(a,b):ql(a,b)}
function us(a){R("transport_use_scheduler")?ti.qa(a):window.clearTimeout(a)}
function ys(a){var b,c,d,e,f,g,h,k,l,n;return A(function(p){return 1==p.h?(d=null==(b=a)?void 0:null==(c=b.responseContext)?void 0:c.globalConfigGroup,e=Rr(d,xk),g=null==(f=d)?void 0:f.hotHashData,h=Rr(d,wk),l=null==(k=d)?void 0:k.coldHashData,(n=ur().resolve(new pr(To)))?g?e?p.yield(Vo(n,g,e),2):p.yield(Vo(n,g),2):p.v(2):p.return()):l?h?p.yield(Wo(n,l,h),0):p.yield(Wo(n,l),0):p.v(0)})}
function qs(a,b){b=void 0===b?200:b;return a?300===b?as:Zr:300===b?$r:Yr}
function ks(a){a=Object.keys(a);a=v(a);for(var b=a.next();!b.done;b=a.next())if(b=b.value,lq[b])return b}
function ls(a){switch(a){case "DELAYED_EVENT_TIER_UNSPECIFIED":return 0;case "DELAYED_EVENT_TIER_DEFAULT":return 100;case "DELAYED_EVENT_TIER_DISPATCH_TO_EMPTY":return 200;case "DELAYED_EVENT_TIER_FAST":return 300;case "DELAYED_EVENT_TIER_IMMEDIATE":return 400;default:return 200}}
;var Bs=B.ytLoggingGelSequenceIdObj_||{};C("ytLoggingGelSequenceIdObj_",Bs);
function Cs(a,b,c,d){d=void 0===d?{}:d;var e={},f=Math.round(d.timestamp||U());e.eventTimeMs=f<Number.MAX_SAFE_INTEGER?f:0;e[a]=b;a=cr();e.context={lastActivityMs:String(d.timestamp||!isFinite(a)?-1:a)};d.sequenceGroup&&!R("web_gel_sequence_info_killswitch")&&(a=e.context,b=d.sequenceGroup,Bs[b]=b in Bs?Bs[b]+1:0,a.sequence={index:Bs[b],groupKey:b},d.endOfSequence&&delete Bs[d.sequenceGroup]);(d.sendIsolatedPayload?ms:hs)({endpoint:"log_event",payload:e,cttAuthInfo:d.cttAuthInfo,dangerousLogToVisitorSession:d.dangerousLogToVisitorSession},
c)}
;function jn(a,b,c){c=void 0===c?{}:c;var d=Nq;P("ytLoggingEventsDefaultDisabled",!1)&&Nq===Nq&&(d=null);R("web_all_payloads_via_jspb")&&!c.timestamp&&(c.lact=cr(),c.timestamp=U());Cs(a,b,d,c)}
;C("ytLoggingGelSequenceIdObj_",B.ytLoggingGelSequenceIdObj_||{});var Ds=new Set,Es=0,Fs=0,Gs=0,Hs=[],Is=["PhantomJS","Googlebot","TO STOP THIS SECURITY SCAN go/scan"];function hn(a){Js(a)}
function Ks(a){Js(a,"WARNING")}
function Ls(a){a instanceof Error?Js(a):(a=Oa(a)?JSON.stringify(a):String(a),a=new T(a),a.name="RejectedPromiseError",Ks(a))}
function Js(a,b,c,d,e,f,g,h){f=void 0===f?{}:f;f.name=c||P("INNERTUBE_CONTEXT_CLIENT_NAME",1);f.version=d||P("INNERTUBE_CONTEXT_CLIENT_VERSION");c=f;b=void 0===b?"ERROR":b;g=void 0===g?!1:g;b=void 0===b?"ERROR":b;g=void 0===g?!1:g;if(a&&(a.hasOwnProperty("level")&&a.level&&(b=a.level),R("console_log_js_exceptions")&&(d=[],d.push("Name: "+a.name),d.push("Message: "+a.message),a.hasOwnProperty("params")&&d.push("Error Params: "+JSON.stringify(a.params)),a.hasOwnProperty("args")&&d.push("Error args: "+
JSON.stringify(a.args)),d.push("File name: "+a.fileName),d.push("Stacktrace: "+a.stack),d=d.join("\n"),window.console.log(d,a)),!(5<=Es))){d=Hs;var k=Cc(a);e=k.message||"Unknown Error";f=k.name||"UnknownError";var l=k.stack||a.i||"Not available";if(l.startsWith(f+": "+e)){var n=l.split("\n");n.shift();l=n.join("\n")}n=k.lineNumber||"Not available";k=k.fileName||"Not available";var p=0;if(a.hasOwnProperty("args")&&a.args&&a.args.length)for(var t=0;t<a.args.length&&!(p=Pl(a.args[t],"params."+t,c,p),
500<=p);t++);else if(a.hasOwnProperty("params")&&a.params){var r=a.params;if("object"===typeof a.params)for(t in r){if(r[t]){var x="params."+t,y=Rl(r[t]);c[x]=y;p+=x.length+y.length;if(500<p)break}}else c.params=Rl(r)}if(d.length)for(t=0;t<d.length&&!(p=Pl(d[t],"params.context."+t,c,p),500<=p);t++);navigator.vendor&&!c.hasOwnProperty("vendor")&&(c["device.vendor"]=navigator.vendor);t={message:e,name:f,lineNumber:n,fileName:k,stack:l,params:c,sampleWeight:1};c=Number(a.columnNumber);isNaN(c)||(t.lineNumber=
t.lineNumber+":"+c);if("IGNORED"===a.level)a=0;else a:{a=Ll();c=v(a.Ta);for(d=c.next();!d.done;d=c.next())if(d=d.value,t.message&&t.message.match(d.Yf)){a=d.weight;break a}a=v(a.Pa);for(c=a.next();!c.done;c=a.next())if(c=c.value,c.callback(t)){a=c.weight;break a}a=1}t.sampleWeight=a;a=v(Gl);for(c=a.next();!c.done;c=a.next())if(c=c.value,c.lc[t.name])for(e=v(c.lc[t.name]),d=e.next();!d.done;d=e.next())if(f=d.value,d=t.message.match(f.regexp)){t.params["params.error.original"]=d[0];e=f.groups;f={};
for(n=0;n<e.length;n++)f[e[n]]=d[n+1],t.params["params.error."+e[n]]=d[n+1];t.message=c.Ic(f);break}t.params||(t.params={});a=Ll();t.params["params.errorServiceSignature"]="msg="+a.Ta.length+"&cb="+a.Pa.length;t.params["params.serviceWorker"]="false";B.document&&B.document.querySelectorAll&&(t.params["params.fscripts"]=String(document.querySelectorAll("script:not([nonce])").length));zb("sample").constructor!==yb&&(t.params["params.fconst"]="true");window.yterr&&"function"===typeof window.yterr&&window.yterr(t);
if(0!==t.sampleWeight&&!Ds.has(t.message)){if(g&&R("web_enable_error_204"))Ms(void 0===b?"ERROR":b,t);else{b=void 0===b?"ERROR":b;"ERROR"===b?(Ml.Ya("handleError",t),R("record_app_crashed_web")&&0===Gs&&1===t.sampleWeight&&(Gs++,g={appCrashType:"APP_CRASH_TYPE_BREAKPAD"},R("report_client_error_with_app_crash_ks")||(g.systemHealth={crashData:{clientError:{logMessage:{message:t.message}}}}),jn("appCrashed",g)),Fs++):"WARNING"===b&&Ml.Ya("handleWarning",t);if(R("kevlar_gel_error_routing")){g=b;h=void 0===
h?{}:h;b:{a=v(Is);for(c=a.next();!c.done;c=a.next())if(pn(c.value.toLowerCase())){a=!0;break b}a=!1}if(a)h=void 0;else{c={stackTrace:t.stack};t.fileName&&(c.filename=t.fileName);a=t.lineNumber&&t.lineNumber.split?t.lineNumber.split(":"):[];0!==a.length&&(1!==a.length||isNaN(Number(a[0]))?2!==a.length||isNaN(Number(a[0]))||isNaN(Number(a[1]))||(c.lineNumber=Number(a[0]),c.columnNumber=Number(a[1])):c.lineNumber=Number(a[0]));a={level:"ERROR_LEVEL_UNKNOWN",message:t.message,errorClassName:t.name,sampleWeight:t.sampleWeight};
"ERROR"===g?a.level="ERROR_LEVEL_ERROR":"WARNING"===g&&(a.level="ERROR_LEVEL_WARNNING");c={isObfuscated:!0,browserStackInfo:c};h.pageUrl=window.location.href;h.kvPairs=[];P("FEXP_EXPERIMENTS")&&(h.experimentIds=P("FEXP_EXPERIMENTS"));e=P("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");if(!Tk("web_disable_gel_stp_ecatcher_killswitch")&&e)for(f=v(Object.keys(e)),d=f.next();!d.done;d=f.next())d=d.value,h.kvPairs.push({key:d,value:String(e[d])});if(e=t.params)for(f=v(Object.keys(e)),d=f.next();!d.done;d=f.next())d=
d.value,h.kvPairs.push({key:"client."+d,value:String(e[d])});d=P("SERVER_NAME");e=P("SERVER_VERSION");d&&e&&(h.kvPairs.push({key:"server.name",value:d}),h.kvPairs.push({key:"server.version",value:e}));h={errorMetadata:h,stackTrace:c,logMessage:a}}h&&(jn("clientError",h),("ERROR"===g||R("errors_flush_gel_always_killswitch"))&&ps(void 0,void 0,!1))}R("suppress_error_204_logging")||Ms(b,t)}try{Ds.add(t.message)}catch(z){}Es++}}}
function Ms(a,b){var c=b.params||{};a={urlParams:{a:"logerror",t:"jserror",type:b.name,msg:b.message.substr(0,250),line:b.lineNumber,level:a,"client.name":c.name},postParams:{url:P("PAGE_NAME",window.location.href),file:b.fileName},method:"POST"};c.version&&(a["client.version"]=c.version);if(a.postParams){b.stack&&(a.postParams.stack=b.stack);b=v(Object.keys(c));for(var d=b.next();!d.done;d=b.next())d=d.value,a.postParams["client."+d]=c[d];if(c=P("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS"))for(b=v(Object.keys(c)),
d=b.next();!d.done;d=b.next())d=d.value,a.postParams[d]=c[d];c=P("SERVER_NAME");b=P("SERVER_VERSION");c&&b&&(a.postParams["server.name"]=c,a.postParams["server.version"]=b)}xl(P("ECATCHER_REPORT_HOST","")+"/error_204",a)}
;function Ns(){this.register=new Map}
function Os(a){a=v(a.register.values());for(var b=a.next();!b.done;b=a.next())b.value.cg("ABORTED")}
Ns.prototype.clear=function(){Os(this);this.register.clear()};
var Ps=new Ns;var Qs=Date.now().toString();
function Rs(){a:{if(window.crypto&&window.crypto.getRandomValues)try{var a=Array(16),b=new Uint8Array(16);window.crypto.getRandomValues(b);for(var c=0;c<a.length;c++)a[c]=b[c];var d=a;break a}catch(e){}d=Array(16);for(a=0;16>a;a++){b=Date.now();for(c=0;c<b%23;c++)d[a]=Math.random();d[a]=Math.floor(256*Math.random())}if(Qs)for(a=1,b=0;b<Qs.length;b++)d[a%16]=d[a%16]^d[(a-1)%16]/4^Qs.charCodeAt(b),a++}a=[];for(b=0;b<d.length;b++)a.push("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(d[b]&63));
return a.join("")}
;var Ss,Ts=B.ytLoggingDocDocumentNonce_;Ts||(Ts=Rs(),C("ytLoggingDocDocumentNonce_",Ts));Ss=Ts;function Us(a){this.h=a}
m=Us.prototype;m.getAsJson=function(){var a={};void 0!==this.h.trackingParams?a.trackingParams=this.h.trackingParams:(a.veType=this.h.veType,void 0!==this.h.veCounter&&(a.veCounter=this.h.veCounter),void 0!==this.h.elementIndex&&(a.elementIndex=this.h.elementIndex));void 0!==this.h.dataElement&&(a.dataElement=this.h.dataElement.getAsJson());void 0!==this.h.youtubeData&&(a.youtubeData=this.h.youtubeData);this.h.isCounterfactual&&(a.isCounterfactual=!0);return a};
m.getAsJspb=function(){var a=new Ek;void 0!==this.h.trackingParams?G(a,1,kf(this.h.trackingParams,!0)):(void 0!==this.h.veType&&G(a,2,uf(this.h.veType)),void 0!==this.h.veCounter&&G(a,6,uf(this.h.veCounter)),void 0!==this.h.elementIndex&&G(a,3,uf(this.h.elementIndex)),this.h.isCounterfactual&&G(a,5,rf(!0)));if(void 0!==this.h.dataElement){var b=this.h.dataElement.getAsJspb();$f(a,Ek,7,b)}void 0!==this.h.youtubeData&&$f(a,yk,8,this.h.jspbYoutubeData);return a};
m.toString=function(){return JSON.stringify(this.getAsJson())};
m.isClientVe=function(){return!this.h.trackingParams&&!!this.h.veType};
m.getLoggingDirectives=function(){return this.h.loggingDirectives};function Vs(a){return P("client-screen-nonce-store",{})[void 0===a?0:a]}
function Ws(a,b){b=void 0===b?0:b;var c=P("client-screen-nonce-store");c||(c={},Sk("client-screen-nonce-store",c));c[b]=a}
function Xs(a){a=void 0===a?0:a;return 0===a?"ROOT_VE_TYPE":"ROOT_VE_TYPE."+a}
function Ys(a){return P(Xs(void 0===a?0:a))}
C("yt_logging_screen.getRootVeType",Ys);function Zs(){var a=P("csn-to-ctt-auth-info");a||(a={},Sk("csn-to-ctt-auth-info",a));return a}
function $s(){return Object.values(P("client-screen-nonce-store",{})).filter(function(a){return void 0!==a})}
function at(a){a=Vs(void 0===a?0:a);if(!a&&!P("USE_CSN_FALLBACK",!0))return null;a||(a="UNDEFINED_CSN");return a?a:null}
C("yt_logging_screen.getCurrentCsn",at);function bt(a,b,c){var d=Zs();(c=at(c))&&delete d[c];b&&(d[a]=b)}
function ct(a){return Zs()[a]}
C("yt_logging_screen.getCttAuthInfo",ct);C("yt_logging_screen.setCurrentScreen",function(a,b,c,d){c=void 0===c?0:c;if(a!==Vs(c)||b!==P(Xs(c)))if(bt(a,d,c),Ws(a,c),Sk(Xs(c),b),b=function(){setTimeout(function(){a&&jn("foregroundHeartbeatScreenAssociated",{clientDocumentNonce:Ss,clientScreenNonce:a})},0)},"requestAnimationFrame"in window)try{window.requestAnimationFrame(b)}catch(e){b()}else b()});var dt=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};C("yt.msgs_",dt);function et(a){Nk(dt,arguments)}
;function ft(){var a=sb(gt),b;return(new Wd(function(c,d){a.onSuccess=function(e){pl(e)?c(new ht(e)):d(new jt("Request failed, status="+(e&&"status"in e?e.status:-1),"net.badstatus",e))};
a.onError=function(e){d(new jt("Unknown request error","net.unknown",e))};
a.onTimeout=function(e){d(new jt("Request timed out","net.timeout",e))};
b=xl("//googleads.g.doubleclick.net/pagead/id",a)})).qc(function(c){c instanceof ce&&b.abort();
return ae(c)})}
function jt(a,b,c){Za.call(this,a+", errorCode="+b);this.errorCode=b;this.xhr=c;this.name="PromiseAjaxError"}
w(jt,Za);function ht(a){this.xhr=a}
;function kt(){this.h=0;this.value_=null}
kt.prototype.then=function(a,b,c){return 1===this.h&&a?(a=a.call(c,this.value_))&&"function"===typeof a.then?a:lt(a):2===this.h&&b?(a=b.call(c,this.value_))&&"function"===typeof a.then?a:mt(a):this};
kt.prototype.getValue=function(){return this.value_};
kt.prototype.isRejected=function(){return 2==this.h};
kt.prototype.$goog_Thenable=!0;function mt(a){var b=new kt;a=void 0===a?null:a;b.h=2;b.value_=void 0===a?null:a;return b}
function lt(a){var b=new kt;a=void 0===a?null:a;b.h=1;b.value_=void 0===a?null:a;return b}
;function nt(a,b){var c=void 0===c?{}:c;a={method:void 0===b?"POST":b,mode:hl(a)?"same-origin":"cors",credentials:hl(a)?"same-origin":"include"};b={};for(var d=v(Object.keys(c)),e=d.next();!e.done;e=d.next())e=e.value,c[e]&&(b[e]=c[e]);0<Object.keys(b).length&&(a.headers=b);return a}
;function ot(){return zg()||(Be||Ce)&&pn("applewebkit")&&!pn("version")&&(!pn("safari")||pn("gsa/"))||Tc&&pn("version/")?!0:P("EOM_VISITOR_DATA")?!1:!0}
;function pt(a){a:{var b="EMBEDDED_PLAYER_MODE_UNKNOWN";window.location.hostname.includes("youtubeeducation.com")&&(b="EMBEDDED_PLAYER_MODE_PFL");var c=a.raw_embedded_player_response;if(!c&&(a=a.embedded_player_response))try{c=JSON.parse(a)}catch(e){break a}if(c)b:for(var d in Ck)if(Ck[d]==c.embeddedPlayerMode){b=Ck[d];break b}}return"EMBEDDED_PLAYER_MODE_PFL"===b}
;function qt(a){Za.call(this,a.message||a.description||a.name);this.isMissing=a instanceof rt;this.isTimeout=a instanceof jt&&"net.timeout"==a.errorCode;this.isCanceled=a instanceof ce}
w(qt,Za);qt.prototype.name="BiscottiError";function rt(){Za.call(this,"Biscotti ID is missing from server")}
w(rt,Za);rt.prototype.name="BiscottiMissingError";var gt={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},st=null;function tt(){if(R("disable_biscotti_fetch_entirely_for_all_web_clients"))return Error("Biscotti id fetching has been disabled entirely.");if(!ot())return Error("User has not consented - not fetching biscotti id.");var a=P("PLAYER_VARS",{});if("1"==qb(a))return Error("Biscotti ID is not available in private embed mode");if(pt(a))return Error("Biscotti id fetching has been disabled for pfl.")}
function Lk(){var a=tt();if(void 0!==a)return ae(a);st||(st=ft().then(ut).qc(function(b){return vt(2,b)}));
return st}
function ut(a){a=a.xhr.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new rt;a=JSON.parse(a.substr(4));if(1<(a.type||1))throw new rt;a=a.id;Mk(a);st=lt(a);wt(18E5,2);return a}
function vt(a,b){b=new qt(b);Mk("");st=mt(b);0<a&&wt(12E4,a-1);throw b;}
function wt(a,b){ql(function(){ft().then(ut,function(c){return vt(b,c)}).qc(bb)},a)}
function xt(){try{var a=D("yt.ads.biscotti.getId_");return a?a():Lk()}catch(b){return ae(b)}}
;function zt(a){if("1"!=qb(P("PLAYER_VARS",{}))){a&&Kk();try{xt().then(function(){},function(){}),ql(zt,18E5)}catch(b){Xk(b)}}}
;function At(){var a=em(),b=hm(119),c=1<window.devicePixelRatio;if(document.body&&Fi(document.body,"exp-invert-logo"))if(c&&!Fi(document.body,"inverted-hdpi")){var d=document.body;if(d.classList)d.classList.add("inverted-hdpi");else if(!Fi(d,"inverted-hdpi")){var e=Di(d);Ei(d,e+(0<e.length?" inverted-hdpi":"inverted-hdpi"))}}else!c&&Fi(document.body,"inverted-hdpi")&&Gi();if(b!=c){b="f"+(Math.floor(119/31)+1);d=im(b)||0;d=c?d|67108864:d&-67108865;0===d?delete bm[b]:(c=d.toString(16),bm[b]=c.toString());
c=!0;R("web_secure_pref_cookie_killswitch")&&(c=!1);b=a.h;d=[];for(f in bm)bm.hasOwnProperty(f)&&d.push(f+"="+encodeURIComponent(String(bm[f])));var f=d.join("&");Yl(b,f,63072E3,a.i,c)}}
;var Bt=new Map([["dark","USER_INTERFACE_THEME_DARK"],["light","USER_INTERFACE_THEME_LIGHT"]]);function Ct(){var a=void 0===a?window.location.href:a;if(R("kevlar_disable_theme_param"))return null;bc(cc(5,a));try{var b=fl(a).theme;return Bt.get(b)||null}catch(c){}return null}
;function Dt(){this.h={};if(this.i=am()){var a=Zl("CONSISTENCY");a&&Et(this,{encryptedTokenJarContents:a})}}
Dt.prototype.handleResponse=function(a,b){if(!b)throw Error("request needs to be passed into ConsistencyService");var c,d;b=(null==(c=b.Na.context)?void 0:null==(d=c.request)?void 0:d.consistencyTokenJars)||[];var e;if(a=null==(e=a.responseContext)?void 0:e.consistencyTokenJar){e=v(b);for(c=e.next();!c.done;c=e.next())delete this.h[c.value.encryptedTokenJarContents];Et(this,a)}};
function Et(a,b){if(b.encryptedTokenJarContents&&(a.h[b.encryptedTokenJarContents]=b,"string"===typeof b.expirationSeconds)){var c=Number(b.expirationSeconds);setTimeout(function(){delete a.h[b.encryptedTokenJarContents]},1E3*c);
a.i&&Yl("CONSISTENCY",b.encryptedTokenJarContents,c,void 0,!0)}}
;var Ft=window.location.hostname.split(".").slice(-2).join(".");function Gt(){var a=P("LOCATION_PLAYABILITY_TOKEN");"TVHTML5"===P("INNERTUBE_CLIENT_NAME")&&(this.h=Ht(this))&&(a=this.h.get("yt-location-playability-token"));a&&(this.locationPlayabilityToken=a,this.i=void 0)}
var It;function Jt(){It=D("yt.clientLocationService.instance");It||(It=new Gt,C("yt.clientLocationService.instance",It));return It}
m=Gt.prototype;m.setLocationOnInnerTubeContext=function(a){a.client||(a.client={});this.i?(a.client.locationInfo||(a.client.locationInfo={}),a.client.locationInfo.latitudeE7=Math.floor(1E7*this.i.coords.latitude),a.client.locationInfo.longitudeE7=Math.floor(1E7*this.i.coords.longitude),a.client.locationInfo.horizontalAccuracyMeters=Math.round(this.i.coords.accuracy),a.client.locationInfo.forceLocationPlayabilityTokenRefresh=!0):this.locationPlayabilityToken&&(a.client.locationPlayabilityToken=this.locationPlayabilityToken)};
m.handleResponse=function(a){var b;a=null==(b=a.responseContext)?void 0:b.locationPlayabilityToken;void 0!==a&&(this.locationPlayabilityToken=a,this.i=void 0,"TVHTML5"===P("INNERTUBE_CLIENT_NAME")?(this.h=Ht(this))&&this.h.set("yt-location-playability-token",a,15552E3):Yl("YT_CL",JSON.stringify({loctok:a}),15552E3,Ft,!0))};
function Ht(a){return void 0===a.h?new $m("yt-client-location"):a.h}
m.clearLocationPlayabilityToken=function(a){"TVHTML5"===a?(this.h=Ht(this))&&this.h.remove("yt-location-playability-token"):$l("YT_CL")};
m.getCurrentPositionFromGeolocation=function(){var a=this;if(!(navigator&&navigator.geolocation&&navigator.geolocation.getCurrentPosition))return Promise.reject(Error("Geolocation unsupported"));var b=!1,c=1E4;"MWEB"===P("INNERTUBE_CLIENT_NAME")&&(b=!0,c=15E3);return new Promise(function(d,e){navigator.geolocation.getCurrentPosition(function(f){a.i=f;d(f)},function(f){e(f)},{enableHighAccuracy:b,
maximumAge:0,timeout:c})})};
m.createUnpluggedLocationInfo=function(a){var b={};a=a.coords;if(null==a?0:a.latitude)b.latitudeE7=Math.floor(1E7*a.latitude);if(null==a?0:a.longitude)b.longitudeE7=Math.floor(1E7*a.longitude);if(null==a?0:a.accuracy)b.locationRadiusMeters=Math.round(a.accuracy);return b};
m.createLocationInfo=function(a){var b={};a=a.coords;if(null==a?0:a.latitude)b.latitudeE7=Math.floor(1E7*a.latitude);if(null==a?0:a.longitude)b.longitudeE7=Math.floor(1E7*a.longitude);return b};function Kt(a,b){var c,d=null==(c=Rr(a,Bk))?void 0:c.signal;if(d&&b.Tb&&(c=b.Tb[d]))return c();var e;if((c=null==(e=Rr(a,zk))?void 0:e.request)&&b.Ud&&(e=b.Ud[c]))return e();for(var f in a)if(b.cd[f]&&(a=b.cd[f]))return a()}
;function Lt(a){return function(){return new a}}
;var Mt={},Nt=(Mt.WEB_UNPLUGGED="^unplugged/",Mt.WEB_UNPLUGGED_ONBOARDING="^unplugged/",Mt.WEB_UNPLUGGED_OPS="^unplugged/",Mt.WEB_UNPLUGGED_PUBLIC="^unplugged/",Mt.WEB_CREATOR="^creator/",Mt.WEB_KIDS="^kids/",Mt.WEB_EXPERIMENTS="^experiments/",Mt.WEB_MUSIC="^music/",Mt.WEB_REMIX="^music/",Mt.WEB_MUSIC_EMBEDDED_PLAYER="^music/",Mt.WEB_MUSIC_EMBEDDED_PLAYER="^main_app/|^sfv/",Mt);
function Ot(a){var b=void 0===b?"UNKNOWN_INTERFACE":b;if(1===a.length)return a[0];var c=Nt[b];if(c){var d=new RegExp(c),e=v(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,d.exec(c))return c}var f=[];Object.entries(Nt).forEach(function(g){var h=v(g);g=h.next().value;h=h.next().value;b!==g&&f.push(h)});
d=new RegExp(f.join("|"));a.sort(function(g,h){return g.length-h.length});
e=v(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,!d.exec(c))return c;return a[0]}
;function Pt(){}
Pt.prototype.m=function(a,b,c){b=void 0===b?{}:b;c=void 0===c?Vl:c;var d=a.clickTrackingParams,e=this.l,f=!1;f=void 0===f?!1:f;e=void 0===e?!1:e;var g=P("INNERTUBE_CONTEXT");if(g){g=tb(g);R("web_no_tracking_params_in_shell_killswitch")||delete g.clickTracking;g.client||(g.client={});var h=g.client;"MWEB"===h.clientName&&(h.clientFormFactor=P("IS_TABLET")?"LARGE_FORM_FACTOR":"SMALL_FORM_FACTOR");h.screenWidthPoints=window.innerWidth;h.screenHeightPoints=window.innerHeight;h.screenPixelDensity=Math.round(window.devicePixelRatio||
1);h.screenDensityFloat=window.devicePixelRatio||1;h.utcOffsetMinutes=-Math.floor((new Date).getTimezoneOffset());var k=void 0===k?!1:k;em();var l="USER_INTERFACE_THEME_LIGHT";hm(165)?l="USER_INTERFACE_THEME_DARK":hm(174)?l="USER_INTERFACE_THEME_LIGHT":!R("kevlar_legacy_browsers")&&window.matchMedia&&window.matchMedia("(prefers-color-scheme)").matches&&window.matchMedia("(prefers-color-scheme: dark)").matches&&(l="USER_INTERFACE_THEME_DARK");k=k?l:Ct()||l;h.userInterfaceTheme=k;if(!f){if(k=mm())h.connectionType=
k;R("web_log_effective_connection_type")&&(k=nm())&&(g.client.effectiveConnectionType=k)}var n;if(R("web_log_memory_total_kbytes")&&(null==(n=B.navigator)?0:n.deviceMemory)){var p;n=null==(p=B.navigator)?void 0:p.deviceMemory;g.client.memoryTotalKbytes=""+1E6*n}R("web_gcf_hashes_innertube")&&(k=Xo())&&(p=k.coldConfigData,n=k.coldHashData,k=k.hotHashData,g.client.configInfo=g.client.configInfo||{},g.client.configInfo.coldConfigData=p,g.client.configInfo.coldHashData=n,g.client.configInfo.hotHashData=
k);p=fl(B.location.href);!R("web_populate_internal_geo_killswitch")&&p.internalcountrycode&&(h.internalGeo=p.internalcountrycode);"MWEB"===h.clientName||"WEB"===h.clientName?(h.mainAppWebInfo={graftUrl:B.location.href},R("kevlar_woffle")&&Wl.h&&(p=Wl.h,h.mainAppWebInfo.pwaInstallabilityStatus=!p.h&&p.i?"PWA_INSTALLABILITY_STATUS_CAN_BE_INSTALLED":"PWA_INSTALLABILITY_STATUS_UNKNOWN"),h.mainAppWebInfo.webDisplayMode=Xl(),h.mainAppWebInfo.isWebNativeShareAvailable=navigator&&void 0!==navigator.share):
"TVHTML5"===h.clientName&&(!R("web_lr_app_quality_killswitch")&&(p=P("LIVING_ROOM_APP_QUALITY"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||{},{appQuality:p})),p=P("LIVING_ROOM_CERTIFICATION_SCOPE"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||{},{certificationScope:p}));if(!R("web_populate_time_zone_itc_killswitch")){b:{if("undefined"!==typeof Intl)try{var t=(new Intl.DateTimeFormat).resolvedOptions().timeZone;break b}catch(J){}t=void 0}t&&(h.timeZone=t)}(t=P("EXPERIMENTS_TOKEN",""))?h.experimentsToken=
t:delete h.experimentsToken;t=ml();Dt.h||(Dt.h=new Dt);h=Dt.h.h;p=[];n=0;for(var r in h)p[n++]=h[r];g.request=Object.assign({},g.request,{internalExperimentFlags:t,consistencyTokenJars:p});!R("web_prequest_context_killswitch")&&(r=P("INNERTUBE_CONTEXT_PREQUEST_CONTEXT"))&&(g.request.externalPrequestContext=r);t=em();r=hm(58);t=t.get("gsml","");g.user=Object.assign({},g.user);r&&(g.user.enableSafetyMode=r);t&&(g.user.lockedSafetyMode=!0);R("warm_op_csn_cleanup")?e&&(f=at())&&(g.clientScreenNonce=f):
!f&&(f=at())&&(g.clientScreenNonce=f);d&&(g.clickTracking={clickTrackingParams:d});if(d=D("yt.mdx.remote.remoteClient_"))g.remoteClient=d;Jt().setLocationOnInnerTubeContext(g);try{var x=il(),y=x.bid;delete x.bid;g.adSignalsInfo={params:[],bid:y};var z=v(Object.entries(x));for(var H=z.next();!H.done;H=z.next()){var L=v(H.value),I=L.next().value,da=L.next().value;x=I;y=da;d=void 0;null==(d=g.adSignalsInfo.params)||d.push({key:x,value:""+y})}var S;if(R("add_ifa_to_tvh5_requests")&&"TVHTML5"===(null==
(S=g.client)?void 0:S.clientName)){var O=P("INNERTUBE_CONTEXT");O.adSignalsInfo&&(g.adSignalsInfo.advertisingId=O.adSignalsInfo.advertisingId,g.adSignalsInfo.limitAdTracking=O.adSignalsInfo.limitAdTracking)}}catch(J){Js(J)}z=g}else Js(Error("Error: No InnerTubeContext shell provided in ytconfig.")),z={};z={context:z};if(H=this.h(a)){this.i(z,H,b);var ba;b="/youtubei/v1/"+Ot(this.j());(H=null==(ba=Rr(a.commandMetadata,Ak))?void 0:ba.apiUrl)&&(b=H);ba=b;(b=P("INNERTUBE_HOST_OVERRIDE"))&&(ba=String(b)+
String(ec(ba)));b={};b.key=P("INNERTUBE_API_KEY");R("json_condensed_response")&&(b.prettyPrint="false");ba=gl(ba,b||{},!1);a=Object.assign({},{command:a},void 0);a={input:ba,jb:nt(ba),Na:z,config:a};a.config.Vb?a.config.Vb.identity=c:a.config.Vb={identity:c};return a}Js(new T("Error: Failed to create Request from Command.",a))};
ia.Object.defineProperties(Pt.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!1}}});function Qt(){}
w(Qt,Pt);Qt.prototype.m=function(){return{input:"/getDatasyncIdsEndpoint",jb:nt("/getDatasyncIdsEndpoint","GET"),Na:{}}};
Qt.prototype.j=function(){return[]};
Qt.prototype.h=function(){};
Qt.prototype.i=function(){};var Rt={},St=(Rt.GET_DATASYNC_IDS=Lt(Qt),Rt);var Tt="absolute_experiments app conditional_experiments debugcss debugjs expflag forced_experiments pbj pbjreload sbb spf spfreload sr_bns_address sttick".split(" ");
function Ut(a,b){var c=void 0===c?!0:c;var d=P("VALID_SESSION_TEMPDATA_DOMAINS",[]),e=dc(window.location.href);e&&d.push(e);e=dc(a);if(0<=db(d,e)||!e&&0==a.lastIndexOf("/",0))if(d=document.createElement("a"),Nh(d,a),a=d.href)if(a=ec(a),a=fc(a))if(c&&!b.csn&&(b.itct||b.ved)&&(b=Object.assign({csn:at()},b)),f){var f=parseInt(f,10);isFinite(f)&&0<f&&Vt(a,b,f)}else Vt(a,b)}
function Vt(a,b,c){a=Wt(a);b=b?kc(b):"";c=c||5;ot()&&Yl(a,b,c)}
function Wt(a){for(var b=v(Tt),c=b.next();!c.done;c=b.next())a=rc(a,c.value);return"ST-"+$b(a).toString(36)}
;function Xt(){try{return!!self.localStorage}catch(a){return!1}}
;function Yt(a){a=a.match(/(.*)::.*::.*/);if(null!==a)return a[1]}
function Zt(a){if(Xt()){var b=Object.keys(window.localStorage);b=v(b);for(var c=b.next();!c.done;c=b.next()){c=c.value;var d=Yt(c);void 0===d||a.includes(d)||self.localStorage.removeItem(c)}}}
function $t(){if(!Xt())return!1;var a=pm(),b=Object.keys(window.localStorage);b=v(b);for(var c=b.next();!c.done;c=b.next())if(c=Yt(c.value),void 0!==c&&c!==a)return!0;return!1}
;function au(){var a=!1;try{a=!!window.sessionStorage.getItem("session_logininfo")}catch(b){a=!0}return R("copy_login_info_to_st_cookie")&&("WEB"===P("INNERTUBE_CLIENT_NAME")||"WEB_CREATOR"===P("INNERTUBE_CLIENT_NAME"))&&a}
function bu(a){if(P("LOGGED_IN",!0)&&au()){var b=P("VALID_SESSION_TEMPDATA_DOMAINS",[]);var c=dc(window.location.href);c&&b.push(c);c=dc(a);0<=db(b,c)||!c&&0==a.lastIndexOf("/",0)?(b=ec(a),(b=fc(b))?(b=Wt(b),b=(b=Zl(b)||null)?el(b):{}):b=null):b=null;null==b&&(b={});c=b;var d=void 0;au()?(d||(d=P("LOGIN_INFO")),d?(c.session_logininfo=d,c=!0):c=!1):c=!1;c&&Ut(a,b)}}
;function cu(a){var b=Ia.apply(1,arguments);if(!du(a)||b.some(function(d){return!du(d)}))throw Error("Only objects may be merged.");
b=v(b);for(var c=b.next();!c.done;c=b.next())eu(a,c.value);return a}
function eu(a,b){for(var c in b)if(du(b[c])){if(c in a&&!du(a[c]))throw Error("Cannot merge an object into a non-object.");c in a||(a[c]={});eu(a[c],b[c])}else if(fu(b[c])){if(c in a&&!fu(a[c]))throw Error("Cannot merge an array into a non-array.");c in a||(a[c]=[]);gu(a[c],b[c])}else a[c]=b[c];return a}
function gu(a,b){b=v(b);for(var c=b.next();!c.done;c=b.next())c=c.value,du(c)?a.push(eu({},c)):fu(c)?a.push(gu([],c)):a.push(c);return a}
function du(a){return"object"===typeof a&&!Array.isArray(a)}
function fu(a){return"object"===typeof a&&Array.isArray(a)}
;function hu(a){var b;(b=D("ytcsi."+(a||"")+"data_"))||(b={tick:{},info:{}},C("ytcsi."+(a||"")+"data_",b));return b}
function iu(){var a=hu();a.info||(a.info={});return a.info}
function ju(a){a=hu(a);a.metadata||(a.metadata={});return a.metadata}
function ku(a){a=hu(a);a.tick||(a.tick={});return a.tick}
function lu(a){a=hu(a);if(a.gel){var b=a.gel;b.gelInfos||(b.gelInfos={});b.gelTicks||(b.gelTicks={})}else a.gel={gelTicks:{},gelInfos:{}};return a.gel}
function mu(a){a=lu(a);a.gelInfos||(a.gelInfos={});return a.gelInfos}
function nu(a){var b=hu(a).nonce;b||(b=Rs(),hu(a).nonce=b);return b}
;function ou(){var a=D("ytcsi.debug");a||(a=[],C("ytcsi.debug",a),C("ytcsi.reference",{}));return a}
function pu(a){a=a||"";var b=D("ytcsi.reference");b||(ou(),b=D("ytcsi.reference"));if(b[a])return b[a];var c=ou(),d={timerName:a,info:{},tick:{},span:{},jspbInfo:[]};c.push(d);return b[a]=d}
;var W={},qu=(W.auto_search="LATENCY_ACTION_AUTO_SEARCH",W.ad_to_ad="LATENCY_ACTION_AD_TO_AD",W.ad_to_video="LATENCY_ACTION_AD_TO_VIDEO",W["analytics.explore"]="LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE",W.app_startup="LATENCY_ACTION_APP_STARTUP",W["artist.analytics"]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS",W["artist.events"]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS",W["artist.presskit"]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE",W["asset.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_ASSET_CLAIMED_VIDEOS",
W["asset.composition"]="LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION",W["asset.composition_ownership"]="LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION_OWNERSHIP",W["asset.composition_policy"]="LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION_POLICY",W["asset.embeds"]="LATENCY_ACTION_CREATOR_CMS_ASSET_EMBEDS",W["asset.issues"]="LATENCY_ACTION_CREATOR_CMS_ASSET_ISSUES",W["asset.licenses"]="LATENCY_ACTION_CREATOR_CMS_ASSET_LICENSES",W["asset.metadata"]="LATENCY_ACTION_CREATOR_CMS_ASSET_METADATA",W["asset.ownership"]=
"LATENCY_ACTION_CREATOR_CMS_ASSET_OWNERSHIP",W["asset.policy"]="LATENCY_ACTION_CREATOR_CMS_ASSET_POLICY",W["asset.references"]="LATENCY_ACTION_CREATOR_CMS_ASSET_REFERENCES",W["asset.shares"]="LATENCY_ACTION_CREATOR_CMS_ASSET_SHARES",W["asset.sound_recordings"]="LATENCY_ACTION_CREATOR_CMS_ASSET_SOUND_RECORDINGS",W["asset_group.assets"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUP_ASSETS",W["asset_group.campaigns"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUP_CAMPAIGNS",W["asset_group.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUP_CLAIMED_VIDEOS",
W["asset_group.metadata"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUP_METADATA",W["song.analytics"]="LATENCY_ACTION_CREATOR_SONG_ANALYTICS",W.browse="LATENCY_ACTION_BROWSE",W.cast_splash="LATENCY_ACTION_CAST_SPLASH",W.channels="LATENCY_ACTION_CHANNELS",W.creator_channel_dashboard="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD",W["channel.analytics"]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS",W["channel.comments"]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS",W["channel.content"]="LATENCY_ACTION_CREATOR_POST_LIST",
W["channel.content.promotions"]="LATENCY_ACTION_CREATOR_PROMOTION_LIST",W["channel.copyright"]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT",W["channel.editing"]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING",W["channel.monetization"]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION",W["channel.music"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC",W["channel.music_storefront"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT",W["channel.playlists"]="LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS",W["channel.translations"]=
"LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS",W["channel.videos"]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS",W["channel.live_streaming"]="LATENCY_ACTION_CREATOR_LIVE_STREAMING",W.chips="LATENCY_ACTION_CHIPS",W.commerce_transaction="LATENCY_ACTION_COMMERCE_TRANSACTION",W["dialog.copyright_strikes"]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES",W["dialog.video_copyright"]="LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT",W["dialog.uploads"]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS",W.direct_playback="LATENCY_ACTION_DIRECT_PLAYBACK",
W.embed="LATENCY_ACTION_EMBED",W.entity_key_serialization_perf="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF",W.entity_key_deserialization_perf="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF",W.explore="LATENCY_ACTION_EXPLORE",W.home="LATENCY_ACTION_HOME",W.library="LATENCY_ACTION_LIBRARY",W.live="LATENCY_ACTION_LIVE",W.live_pagination="LATENCY_ACTION_LIVE_PAGINATION",W.mini_app="LATENCY_ACTION_MINI_APP_PLAY",W.onboarding="LATENCY_ACTION_ONBOARDING",W.owner="LATENCY_ACTION_CREATOR_CMS_DASHBOARD",
W["owner.allowlist"]="LATENCY_ACTION_CREATOR_CMS_ALLOWLIST",W["owner.analytics"]="LATENCY_ACTION_CREATOR_CMS_ANALYTICS",W["owner.art_tracks"]="LATENCY_ACTION_CREATOR_CMS_ART_TRACKS",W["owner.assets"]="LATENCY_ACTION_CREATOR_CMS_ASSETS",W["owner.asset_groups"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUPS",W["owner.bulk"]="LATENCY_ACTION_CREATOR_CMS_BULK_HISTORY",W["owner.campaigns"]="LATENCY_ACTION_CREATOR_CMS_CAMPAIGNS",W["owner.channel_invites"]="LATENCY_ACTION_CREATOR_CMS_CHANNEL_INVITES",W["owner.channels"]=
"LATENCY_ACTION_CREATOR_CMS_CHANNELS",W["owner.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS",W["owner.claims"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",W["owner.claims.manual"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",W["owner.delivery"]="LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY",W["owner.delivery_templates"]="LATENCY_ACTION_CREATOR_CMS_DELIVERY_TEMPLATES",W["owner.issues"]="LATENCY_ACTION_CREATOR_CMS_ISSUES",W["owner.licenses"]="LATENCY_ACTION_CREATOR_CMS_LICENSES",W["owner.pitch_music"]=
"LATENCY_ACTION_CREATOR_CMS_PITCH_MUSIC",W["owner.policies"]="LATENCY_ACTION_CREATOR_CMS_POLICIES",W["owner.releases"]="LATENCY_ACTION_CREATOR_CMS_RELEASES",W["owner.reports"]="LATENCY_ACTION_CREATOR_CMS_REPORTS",W["owner.videos"]="LATENCY_ACTION_CREATOR_CMS_VIDEOS",W.parent_profile_settings="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS",W.parent_tools_collection="LATENCY_ACTION_PARENT_TOOLS_COLLECTION",W.parent_tools_dashboard="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD",W.player_att="LATENCY_ACTION_PLAYER_ATTESTATION",
W["playlist.videos"]="LATENCY_ACTION_CREATOR_PLAYLIST_VIDEO_LIST",W["post.comments"]="LATENCY_ACTION_CREATOR_POST_COMMENTS",W["post.edit"]="LATENCY_ACTION_CREATOR_POST_EDIT",W.prebuffer="LATENCY_ACTION_PREBUFFER",W.prefetch="LATENCY_ACTION_PREFETCH",W.profile_settings="LATENCY_ACTION_KIDS_PROFILE_SETTINGS",W.profile_switcher="LATENCY_ACTION_LOGIN",W.reel_watch="LATENCY_ACTION_REEL_WATCH",W.results="LATENCY_ACTION_RESULTS",W["promotion.edit"]="LATENCY_ACTION_CREATOR_PROMOTION_EDIT",W.search_ui="LATENCY_ACTION_SEARCH_UI",
W.search_suggest="LATENCY_ACTION_SUGGEST",W.search_zero_state="LATENCY_ACTION_SEARCH_ZERO_STATE",W.secret_code="LATENCY_ACTION_KIDS_SECRET_CODE",W.seek="LATENCY_ACTION_PLAYER_SEEK",W.settings="LATENCY_ACTION_SETTINGS",W.store="LATENCY_ACTION_STORE",W.tenx="LATENCY_ACTION_TENX",W.video_to_ad="LATENCY_ACTION_VIDEO_TO_AD",W.watch="LATENCY_ACTION_WATCH",W.watch_it_again="LATENCY_ACTION_KIDS_WATCH_IT_AGAIN",W["watch,watch7"]="LATENCY_ACTION_WATCH",W["watch,watch7_html5"]="LATENCY_ACTION_WATCH",W["watch,watch7ad"]=
"LATENCY_ACTION_WATCH",W["watch,watch7ad_html5"]="LATENCY_ACTION_WATCH",W.wn_comments="LATENCY_ACTION_LOAD_COMMENTS",W.ww_rqs="LATENCY_ACTION_WHO_IS_WATCHING",W["video.analytics"]="LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS",W["video.claims"]="LATENCY_ACTION_CREATOR_VIDEO_CLAIMS",W["video.comments"]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS",W["video.copyright"]="LATENCY_ACTION_CREATOR_VIDEO_COPYRIGHT",W["video.edit"]="LATENCY_ACTION_CREATOR_VIDEO_EDIT",W["video.editor"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR",
W["video.editor_async"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC",W["video.live_settings"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS",W["video.live_streaming"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING",W["video.monetization"]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION",W["video.policy"]="LATENCY_ACTION_CREATOR_VIDEO_POLICY",W["video.rights_management"]="LATENCY_ACTION_CREATOR_VIDEO_RIGHTS_MANAGEMENT",W["video.translations"]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS",W.voice_assistant=
"LATENCY_ACTION_VOICE_ASSISTANT",W.cast_load_by_entity_to_watch="LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH",W.networkless_performance="LATENCY_ACTION_NETWORKLESS_PERFORMANCE",W.gel_compression="LATENCY_ACTION_GEL_COMPRESSION",W.gel_jspb_serialize="LATENCY_ACTION_GEL_JSPB_SERIALIZE",W),Y={},ru=(Y.ad_allowed="adTypesAllowed",Y.yt_abt="adBreakType",Y.ad_cpn="adClientPlaybackNonce",Y.ad_docid="adVideoId",Y.yt_ad_an="adNetworks",Y.ad_at="adType",Y.aida="appInstallDataAgeMs",Y.browse_id="browseId",Y.p=
"httpProtocol",Y.t="transportProtocol",Y.cpn="clientPlaybackNonce",Y.ccs="creatorInfo.creatorCanaryState",Y.ctop="creatorInfo.topEntityType",Y.csn="clientScreenNonce",Y.docid="videoId",Y.GetHome_rid="requestIds",Y.GetSearch_rid="requestIds",Y.GetPlayer_rid="requestIds",Y.GetWatchNext_rid="requestIds",Y.GetBrowse_rid="requestIds",Y.GetLibrary_rid="requestIds",Y.is_continuation="isContinuation",Y.is_nav="isNavigation",Y.b_p="kabukiInfo.browseParams",Y.is_prefetch="kabukiInfo.isPrefetch",Y.is_secondary_nav=
"kabukiInfo.isSecondaryNav",Y.nav_type="kabukiInfo.navigationType",Y.prev_browse_id="kabukiInfo.prevBrowseId",Y.query_source="kabukiInfo.querySource",Y.voz_type="kabukiInfo.vozType",Y.yt_lt="loadType",Y.mver="creatorInfo.measurementVersion",Y.yt_ad="isMonetized",Y.nr="webInfo.navigationReason",Y.nrsu="navigationRequestedSameUrl",Y.pnt="performanceNavigationTiming",Y.prt="playbackRequiresTap",Y.plt="playerInfo.playbackType",Y.pis="playerInfo.playerInitializedState",Y.paused="playerInfo.isPausedOnLoad",
Y.yt_pt="playerType",Y.fmt="playerInfo.itag",Y.yt_pl="watchInfo.isPlaylist",Y.yt_pre="playerInfo.preloadType",Y.yt_ad_pr="prerollAllowed",Y.pa="previousAction",Y.yt_red="isRedSubscriber",Y.rce="mwebInfo.responseContentEncoding",Y.rc="resourceInfo.resourceCache",Y.scrh="screenHeight",Y.scrw="screenWidth",Y.st="serverTimeMs",Y.ssdm="shellStartupDurationMs",Y.br_trs="tvInfo.bedrockTriggerState",Y.kebqat="kabukiInfo.earlyBrowseRequestInfo.abandonmentType",Y.kebqa="kabukiInfo.earlyBrowseRequestInfo.adopted",
Y.label="tvInfo.label",Y.is_mdx="tvInfo.isMdx",Y.preloaded="tvInfo.isPreloaded",Y.aac_type="tvInfo.authAccessCredentialType",Y.upg_player_vis="playerInfo.visibilityState",Y.query="unpluggedInfo.query",Y.upg_chip_ids_string="unpluggedInfo.upgChipIdsString",Y.yt_vst="videoStreamType",Y.vph="viewportHeight",Y.vpw="viewportWidth",Y.yt_vis="isVisible",Y.rcl="mwebInfo.responseContentLength",Y.GetSettings_rid="requestIds",Y.GetTrending_rid="requestIds",Y.GetMusicSearchSuggestions_rid="requestIds",Y.REQUEST_ID=
"requestIds",Y),su="isContinuation isNavigation kabukiInfo.earlyBrowseRequestInfo.adopted kabukiInfo.isPrefetch kabukiInfo.isSecondaryNav isMonetized navigationRequestedSameUrl performanceNavigationTiming playerInfo.isPausedOnLoad prerollAllowed isRedSubscriber tvInfo.isMdx tvInfo.isPreloaded isVisible watchInfo.isPlaylist playbackRequiresTap".split(" "),tu={},uu=(tu.ccs="CANARY_STATE_",tu.mver="MEASUREMENT_VERSION_",tu.pis="PLAYER_INITIALIZED_STATE_",tu.yt_pt="LATENCY_PLAYER_",tu.pa="LATENCY_ACTION_",
tu.ctop="TOP_ENTITY_TYPE_",tu.yt_vst="VIDEO_STREAM_TYPE_",tu),vu="all_vc ap aq c cbr cbrand cbrver cmodel cos cosver cplatform ctheme cver ei l_an l_mm plid srt yt_fss yt_li vpst vpni2 vpil2 icrc icrt pa GetAccountOverview_rid GetHistory_rid cmt d_vpct d_vpnfi d_vpni nsru pc pfa pfeh pftr pnc prerender psc rc start tcrt tcrc ssr vpr vps yt_abt yt_fn yt_fs yt_pft yt_pre yt_pt yt_pvis ytu_pvis yt_ref yt_sts tds".split(" ");
function wu(a,b,c){c=lu(c);if(c.gelInfos)c.gelInfos[a]=!0;else{var d={};c.gelInfos=(d[a]=!0,d)}if(a.match("_rid")){var e=a.split("_rid")[0];a="REQUEST_ID"}if(a in ru){c=ru[a];0<=db(su,c)&&(b=!!b);a in uu&&"string"===typeof b&&(b=uu[a]+b.toUpperCase());a=b;b=c.split(".");for(var f=d={},g=0;g<b.length-1;g++){var h=b[g];f[h]={};f=f[h]}f[b[b.length-1]]="requestIds"===c?[{id:a,endpoint:e}]:a;return cu({},d)}0<=db(vu,a)||Ks(new T("Unknown label logged with GEL CSI",a))}
;function xu(a,b){bp.call(this,1,arguments);this.timer=b}
w(xu,bp);var yu=new cp("aft-recorded",xu);var zu=B.ytLoggingLatencyUsageStats_||{};C("ytLoggingLatencyUsageStats_",zu);function Au(){this.h=0}
function Bu(){Au.h||(Au.h=new Au);return Au.h}
Au.prototype.tick=function(a,b,c,d){Cu(this,"tick_"+a+"_"+b)||jn("latencyActionTicked",{tickName:a,clientActionNonce:b},{timestamp:c,cttAuthInfo:d})};
Au.prototype.info=function(a,b,c){var d=Object.keys(a).join("");Cu(this,"info_"+d+"_"+b)||(a=Object.assign({},a),a.clientActionNonce=b,jn("latencyActionInfo",a,{cttAuthInfo:c}))};
Au.prototype.jspbInfo=function(){};
Au.prototype.span=function(a,b,c){var d=Object.keys(a).join("");Cu(this,"span_"+d+"_"+b)||(a.clientActionNonce=b,jn("latencyActionSpan",a,{cttAuthInfo:c}))};
function Cu(a,b){zu[b]=zu[b]||{count:0};var c=zu[b];c.count++;c.time=U();a.h||(a.h=rm(function(){var d=U(),e;for(e in zu)zu[e]&&6E4<d-zu[e].time&&delete zu[e];a&&(a.h=0)},5E3));
return 5<c.count?(6===c.count&&1>1E5*Math.random()&&(c=new T("CSI data exceeded logging limit with key",b.split("_")),0<=b.indexOf("plev")||Ks(c)),!0):!1}
;var Du=window;function Eu(){this.timing={};this.clearResourceTimings=function(){};
this.webkitClearResourceTimings=function(){};
this.mozClearResourceTimings=function(){};
this.msClearResourceTimings=function(){};
this.oClearResourceTimings=function(){}}
function Fu(){var a;if(R("csi_use_performance_navigation_timing")||R("csi_use_performance_navigation_timing_tvhtml5")){var b,c,d,e=null==Z?void 0:null==(a=Z.getEntriesByType)?void 0:null==(b=a.call(Z,"navigation"))?void 0:null==(c=b[0])?void 0:null==(d=c.toJSON)?void 0:d.call(c);e?(e.requestStart=Gu(e.requestStart),e.responseEnd=Gu(e.responseEnd),e.redirectStart=Gu(e.redirectStart),e.redirectEnd=Gu(e.redirectEnd),e.domainLookupEnd=Gu(e.domainLookupEnd),e.connectStart=Gu(e.connectStart),e.connectEnd=
Gu(e.connectEnd),e.responseStart=Gu(e.responseStart),e.secureConnectionStart=Gu(e.secureConnectionStart),e.domainLookupStart=Gu(e.domainLookupStart),e.isPerformanceNavigationTiming=!0,a=e):a=Z.timing}else a=Z.timing;return a}
function Gu(a){return Math.round(Hu()+a)}
function Hu(){return(R("csi_use_time_origin")||R("csi_use_time_origin_tvhtml5"))&&Z.timeOrigin?Math.floor(Z.timeOrigin):Z.timing.navigationStart}
var Z=Du.performance||Du.mozPerformance||Du.msPerformance||Du.webkitPerformance||new Eu;var Iu=!1,Ju=!1,Ku={'script[name="scheduler/scheduler"]':"sj",'script[name="player/base"]':"pj",'link[rel="preload"][name="player/embed"]':"pej",'link[rel="stylesheet"][name="www-player"]':"pc",'link[rel="stylesheet"][name="player/www-player"]':"pc",'script[name="desktop_polymer/desktop_polymer"]':"dpj",'link[rel="import"][name="desktop_polymer"]':"dph",'script[name="mobile-c3"]':"mcj",'link[rel="stylesheet"][name="mobile-c3"]':"mcc",'script[name="player-plasma-ias-phone/base"]':"mcppj",'script[name="player-plasma-ias-tablet/base"]':"mcptj",
'link[rel="stylesheet"][name="mobile-polymer-player-ias"]':"mcpc",'link[rel="stylesheet"][name="mobile-polymer-player-svg-ias"]':"mcpsc",'script[name="mobile_blazer_core_mod"]':"mbcj",'link[rel="stylesheet"][name="mobile_blazer_css"]':"mbc",'script[name="mobile_blazer_logged_in_users_mod"]':"mbliuj",'script[name="mobile_blazer_logged_out_users_mod"]':"mblouj",'script[name="mobile_blazer_noncore_mod"]':"mbnj","#player_css":"mbpc",'script[name="mobile_blazer_desktopplayer_mod"]':"mbpj",'link[rel="stylesheet"][name="mobile_blazer_tablet_css"]':"mbtc",
'script[name="mobile_blazer_watch_mod"]':"mbwj"};Ua(Z.clearResourceTimings||Z.webkitClearResourceTimings||Z.mozClearResourceTimings||Z.msClearResourceTimings||Z.oClearResourceTimings||bb,Z);function Lu(a,b,c){if(null!==b){if("yt_lt"===a){var d="string"===typeof b?b:""+b;ju(c).loadType=d}(a=wu(a,b,c))&&Mu(a,c)}}
function Mu(a,b){if(!R("web_csi_action_sampling_enabled")||!hu(b).actionDisabled){var c=pu(b||"");cu(c.info,a);a.loadType&&(c=a.loadType,ju(b).loadType=c);cu(mu(b),a);c=nu(b);b=hu(b).cttAuthInfo;Bu().info(a,c,b)}}
function Nu(){var a,b,c,d;return(null!=(d=null==ur().resolve(new pr(To))?void 0:null==(a=Uo())?void 0:null==(b=a.loggingHotConfig)?void 0:null==(c=b.csiConfig)?void 0:c.debugTicks)?d:[]).map(function(e){return Object.values(e)[0]})}
function Ou(a,b,c){if(!R("web_csi_action_sampling_enabled")||!hu(c).actionDisabled){var d=nu(c),e;if(e=R("web_csi_debug_sample_enabled")&&d){(null==ur().resolve(new pr(To))?0:Uo())&&!Ju&&(Ju=!0,Ou("gcfl",U(),c));var f,g,h;e=(null==ur().resolve(new pr(To))?void 0:null==(f=Uo())?void 0:null==(g=f.loggingHotConfig)?void 0:null==(h=g.csiConfig)?void 0:h.debugSampleWeight)||0;if(f=0!==e)b:{f=Nu();if(0<f.length)for(g=0;g<f.length;g++)if(a===f[g]){f=!0;break b}f=!1}if(f){for(g=f=0;g<d.length;g++)f=31*f+
d.charCodeAt(g),g<d.length-1&&(f%=Math.pow(2,47));e=0!==f%1E5%e;hu(c).debugTicksExcludedLogged||(f={},f.debugTicksExcluded=e,Mu(f,c));hu(c).debugTicksExcludedLogged=!0}else e=!1}if(!e){b||"_"===a[0]||(e=a,Z.mark&&(e.startsWith("mark_")||(e="mark_"+e),c&&(e+=" ("+c+")"),Z.mark(e)));e=pu(c||"");e.tick[a]=b||U();if(e.callback&&e.callback[a])for(e=v(e.callback[a]),f=e.next();!f.done;f=e.next())f=f.value,f();e=lu(c);e.gelTicks&&(e.gelTicks[a]=!0);f=ku(c);e=b||U();R("log_repeated_ytcsi_ticks")?a in f||
(f[a]=e):f[a]=e;f=hu(c).cttAuthInfo;"_start"===a?(a=Bu(),Cu(a,"baseline_"+d)||jn("latencyActionBaselined",{clientActionNonce:d},{timestamp:b,cttAuthInfo:f})):Bu().tick(a,d,b,f);Pu(c);return e}}}
function Qu(){var a=document;if("visibilityState"in a)a=a.visibilityState;else{var b=Pq+"VisibilityState";a=b in a?a[b]:void 0}switch(a){case "hidden":return 0;case "visible":return 1;case "prerender":return 2;case "unloaded":return 3;default:return-1}}
function Ru(a,b){a=document.querySelector(a);if(!a)return!1;var c="",d=a.nodeName;"SCRIPT"===d?(c=a.src,c||(c=a.getAttribute("data-timing-href"))&&(c=window.location.protocol+c)):"LINK"===d&&(c=a.href);Yb()&&a.setAttribute("nonce",Yb());return c?(a=Z.getEntriesByName(c))&&a[0]&&(a=a[0],c=Hu(),Ou("rsf_"+b,c+Math.round(a.fetchStart)),Ou("rse_"+b,c+Math.round(a.responseEnd)),void 0!==a.transferSize&&0===a.transferSize)?!0:!1:!1}
function Su(){var a=window.location.protocol,b=Z.getEntriesByType("resource");b=fb(b,function(c){return 0===c.name.indexOf(a+"//fonts.gstatic.com/s/")});
(b=hb(b,function(c,d){return d.duration>c.duration?d:c},{duration:0}))&&0<b.startTime&&0<b.responseEnd&&(Ou("wffs",Gu(b.startTime)),Ou("wffe",Gu(b.responseEnd)))}
function Tu(a){var b=Uu("aft",a);if(b)return b;b=P((a||"")+"TIMING_AFT_KEYS",["ol"]);for(var c=b.length,d=0;d<c;d++){var e=Uu(b[d],a);if(e)return e}return NaN}
function Uu(a,b){if(a=ku(b)[a])return"number"===typeof a?a:a[a.length-1]}
function Pu(a){var b=Uu("_start",a),c=Tu(a);b&&c&&!Iu&&(hp(yu,new xu(Math.round(c-b),a)),Iu=!0)}
function Vu(a,b){for(var c=v(Object.keys(b)),d=c.next();!d.done;d=c.next())if(d=d.value,!Object.keys(a).includes(d)||"object"===typeof b[d]&&!Vu(a[d],b[d]))return!1;return!0}
function Wu(){if(Z.getEntriesByType){var a=Z.getEntriesByType("paint");if(a=ib(a,function(b){return"first-paint"===b.name}))return Gu(a.startTime)}a=Z.timing;
return a.ye?Math.max(0,a.ye):0}
;function Xu(a,b){Wk(function(){pu("").info.actionType=a;b&&Sk("TIMING_AFT_KEYS",b);Sk("TIMING_ACTION",a);var c=P("TIMING_INFO",{}),d;for(d in c)c.hasOwnProperty(d)&&Lu(d,c[d]);c={isNavigation:!0,actionType:qu[P("TIMING_ACTION")]||"LATENCY_ACTION_UNKNOWN"};if(d=P("PREVIOUS_ACTION"))c.previousAction=qu[d]||"LATENCY_ACTION_UNKNOWN";if(d=P("CLIENT_PROTOCOL"))c.httpProtocol=d;if(d=P("CLIENT_TRANSPORT"))c.transportProtocol=d;(d=at())&&"UNDEFINED_CSN"!==d&&(c.clientScreenNonce=d);d=Qu();if(1===d||-1===d)c.isVisible=
!0;ju();iu();c.loadType="cold";d=iu();var e=Fu(),f=Hu(),g=P("CSI_START_TIMESTAMP_MILLIS",0);0<g&&!R("embeds_web_enable_csi_start_override_killswitch")&&(f=g);f&&(Ou("srt",e.responseStart),1!==d.prerender&&Ou("_start",f,void 0));d=Wu();0<d&&Ou("fpt",d);d=Fu();d.isPerformanceNavigationTiming&&Mu({performanceNavigationTiming:!0});Ou("nreqs",d.requestStart,void 0);Ou("nress",d.responseStart,void 0);Ou("nrese",d.responseEnd,void 0);0<d.redirectEnd-d.redirectStart&&(Ou("nrs",d.redirectStart,void 0),Ou("nre",
d.redirectEnd,void 0));0<d.domainLookupEnd-d.domainLookupStart&&(Ou("ndnss",d.domainLookupStart,void 0),Ou("ndnse",d.domainLookupEnd,void 0));0<d.connectEnd-d.connectStart&&(Ou("ntcps",d.connectStart,void 0),Ou("ntcpe",d.connectEnd,void 0));d.secureConnectionStart>=Hu()&&0<d.connectEnd-d.secureConnectionStart&&(Ou("nstcps",d.secureConnectionStart,void 0),Ou("ntcpe",d.connectEnd,void 0));Z&&"getEntriesByType"in Z&&Su();d=[];if(document.querySelector&&Z&&Z.getEntriesByName)for(var h in Ku)Ku.hasOwnProperty(h)&&
(e=Ku[h],Ru(h,e)&&d.push(e));if(0<d.length)for(c.resourceInfo=[],h=v(d),d=h.next();!d.done;d=h.next())c.resourceInfo.push({resourceCache:d.value});Mu(c);c=iu();h=mu();if("cold"===ju().loadType&&("cold"===c.yt_lt||"cold"===h.loadType)){d=ku();e=lu();e=e.gelTicks?e.gelTicks:e.gelTicks={};for(var k in d)if(!(k in e))if("number"===typeof d[k])Ou(k,Uu(k));else if(R("log_repeated_ytcsi_ticks"))for(f=v(d[k]),g=f.next();!g.done;g=f.next())g=g.value,Ou(k.slice(1),g);k={};d=!1;e=v(Object.keys(c));for(f=e.next();!f.done;f=
e.next())f=f.value,(f=wu(f,c[f]))&&!Vu(mu(),f)&&(cu(h,f),cu(k,f),d=!0);d&&Mu(k)}C("ytglobal.timingready_",!0);k=P("TIMING_ACTION");D("ytglobal.timingready_")&&k&&Yu()&&Tu()&&Pu()})()}
function Zu(a,b,c,d){Wk(Lu)(a,b,c,d)}
function $u(a,b,c){return Wk(Ou)(a,b,c)}
function Yu(){return Wk(function(){return"_start"in ku()})()}
function av(){Wk(function(){var a=nu();requestAnimationFrame(function(){setTimeout(function(){a===nu()&&$u("ol",void 0,void 0)},0)})})()}
var bv=window;bv.ytcsi&&(bv.ytcsi.info=Zu,bv.ytcsi.tick=$u);var cv="tokens consistency mss client_location entities adblock_detection response_received_commands store PLAYER_PRELOAD".split(" "),dv=["type.googleapis.com/youtube.api.pfiinnertube.YoutubeApiInnertube.BrowseResponse"];function ev(a,b,c,d){this.m=a;this.aa=b;this.l=c;this.j=d;this.i=void 0;this.h=new Map;a.Tb||(a.Tb={});a.Tb=Object.assign({},St,a.Tb)}
function fv(a,b,c,d){if(void 0!==ev.h){if(d=ev.h,a=[a!==d.m,b!==d.aa,c!==d.l,!1,!1,!1,void 0!==d.i],a.some(function(e){return e}))throw new T("InnerTubeTransportService is already initialized",a);
}else ev.h=new ev(a,b,c,d)}
function gv(a){var b={signalServiceEndpoint:{signal:"GET_DATASYNC_IDS"}};var c=void 0===c?Vl:c;var d=Kt(b,a.m);if(!d)return ae(new T("Error: No request builder found for command.",b));var e=d.m(b,void 0,c);return e?(bu(e.input),new Wd(function(f){var g,h,k;return A(function(l){if(1==l.h){h="cors"===(null==(g=e.jb)?void 0:g.mode)?"cors":void 0;if(a.l.Ze){var n=e.config,p;n=null==n?void 0:null==(p=n.Vb)?void 0:p.sessionIndex;p=Ul(0,{sessionIndex:n});k=Object.assign({},hv(h),p);return l.v(2)}return l.yield(iv(e.config,
h),3)}2!=l.h&&(k=l.i);f(jv(a,e,k));l.h=0})})):ae(new T("Error: Failed to build request for command.",b))}
function kv(a,b,c){var d;if(b&&!(null==b?0:null==(d=b.fg)?0:d.jg)&&a.j){d=v(cv);for(var e=d.next();!e.done;e=d.next())e=e.value,a.j[e]&&a.j[e].handleResponse(b,c)}}
function jv(a,b,c){var d,e,f,g,h,k,l,n,p,t,r,x,y,z,H,L,I,da,S,O,ba,J,ca,ha,V,ab,Jc,Kc,Lc;return A(function(X){switch(X.h){case 1:X.v(2);break;case 3:if((d=X.i)&&!d.isExpired())return X.return(Promise.resolve(d.h()));case 2:if(!(null==(e=b)?0:null==(f=e.Na)?0:f.context)){X.v(4);break}g=b.Na.context;X.v(5);break;case 5:h=v([]),k=h.next();case 7:if(k.done){X.v(4);break}l=k.value;return X.yield(l.ag(g),8);case 8:k=h.next();X.v(7);break;case 4:if(null==(n=a.i)||!n.gg(b.input,b.Na)){X.v(11);break}return X.yield(a.i.Wf(b.input,
b.Na),12);case 12:return p=X.i,R("kevlar_process_local_innertube_responses_killswitch")||kv(a,p,b),X.return(p);case 11:return(x=null==(r=b.config)?void 0:r.dg)&&a.h.has(x)&&R("web_memoize_inflight_requests")?t=a.h.get(x):(y=JSON.stringify(b.Na),L=null!=(H=null==(z=b.jb)?void 0:z.headers)?H:{},b.jb=Object.assign({},b.jb,{headers:Object.assign({},L,c)}),I=Object.assign({},b.jb),"POST"===b.jb.method&&(I=Object.assign({},I,{body:y})),(null==(da=b.config)?0:da.Ie)&&$u(b.config.Ie),S=function(){return a.aa.fetch(b.input,
I,b.config)},t=S(),x&&a.h.set(x,t)),X.yield(t,13);
case 13:if((O=X.i)&&"error"in O&&(null==(ba=O)?0:null==(J=ba.error)?0:J.details))for(ca=O.error.details,ha=v(ca),V=ha.next();!V.done;V=ha.next())ab=V.value,(Jc=ab["@type"])&&-1<dv.indexOf(Jc)&&(delete ab["@type"],O=ab);x&&a.h.has(x)&&a.h.delete(x);(null==(Kc=b.config)?0:Kc.Je)&&$u(b.config.Je);if(O||null==(Lc=a.i)||!Lc.Of(b.input,b.Na)){X.v(14);break}return X.yield(a.i.Vf(b.input,b.Na),15);case 15:O=X.i;case 14:return kv(a,O,b),X.return(O||void 0)}})}
function iv(a,b){var c,d,e,f;return A(function(g){if(1==g.h){e=null==(c=a)?void 0:null==(d=c.Vb)?void 0:d.sessionIndex;var h=g.yield;var k=Ul(0,{sessionIndex:e});if(!(k instanceof Wd)){var l=new Wd(bb);Xd(l,2,k);k=l}return h.call(g,k,2)}f=g.i;return g.return(Promise.resolve(Object.assign({},hv(b),f)))})}
function hv(a){var b={"Content-Type":"application/json"};P("EOM_VISITOR_DATA")?b["X-Goog-EOM-Visitor-Id"]=P("EOM_VISITOR_DATA"):P("VISITOR_DATA")&&(b["X-Goog-Visitor-Id"]=P("VISITOR_DATA"));P("WEBVIEW_EOM",!1)&&(b["X-Yt-Webview-Eom"]="1");b["X-Youtube-Bootstrap-Logged-In"]=P("LOGGED_IN",!1);P("DEBUG_SETTINGS_METADATA")&&(b["X-Debug-Settings-Metadata"]=P("DEBUG_SETTINGS_METADATA"));"cors"!==a&&((a=P("INNERTUBE_CONTEXT_CLIENT_NAME"))&&(b["X-Youtube-Client-Name"]=a),(a=P("INNERTUBE_CONTEXT_CLIENT_VERSION"))&&
(b["X-Youtube-Client-Version"]=a),(a=P("CHROME_CONNECTED_HEADER"))&&(b["X-Youtube-Chrome-Connected"]=a),(a=P("DOMAIN_ADMIN_STATE"))&&(b["X-Youtube-Domain-Admin-State"]=a));return b}
;var lv=new or("INNERTUBE_TRANSPORT_TOKEN");var mv=["share/get_web_player_share_panel"],nv=["feedback"],ov=["notification/modify_channel_preference"],pv=["browse/edit_playlist"],qv=["subscription/subscribe"],rv=["subscription/unsubscribe"];function sv(){}
w(sv,Pt);sv.prototype.j=function(){return qv};
sv.prototype.h=function(a){return Rr(a,Jk)||void 0};
sv.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params);c.botguardResponse&&(a.botguardResponse=c.botguardResponse);c.feature&&(a.clientFeature=c.feature)};
ia.Object.defineProperties(sv.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function tv(){}
w(tv,Pt);tv.prototype.j=function(){return rv};
tv.prototype.h=function(a){return Rr(a,Ik)||void 0};
tv.prototype.i=function(a,b){b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params)};
ia.Object.defineProperties(tv.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function uv(){}
w(uv,Pt);uv.prototype.j=function(){return nv};
uv.prototype.h=function(a){return Rr(a,Dk)||void 0};
uv.prototype.i=function(a,b,c){a.feedbackTokens=[];b.feedbackToken&&a.feedbackTokens.push(b.feedbackToken);if(b=b.cpn||c.cpn)a.feedbackContext={cpn:b};a.isFeedbackTokenUnencrypted=!!c.is_feedback_token_unencrypted;a.shouldMerge=!1;c.extra_feedback_tokens&&(a.shouldMerge=!0,a.feedbackTokens=a.feedbackTokens.concat(c.extra_feedback_tokens))};
ia.Object.defineProperties(uv.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function vv(){}
w(vv,Pt);vv.prototype.j=function(){return ov};
vv.prototype.h=function(a){return Rr(a,Hk)||void 0};
vv.prototype.i=function(a,b){b.params&&(a.params=b.params);b.secondaryParams&&(a.secondaryParams=b.secondaryParams)};function wv(){}
w(wv,Pt);wv.prototype.j=function(){return pv};
wv.prototype.h=function(a){return Rr(a,Gk)||void 0};
wv.prototype.i=function(a,b){b.actions&&(a.actions=b.actions);b.params&&(a.params=b.params);b.playlistId&&(a.playlistId=b.playlistId)};function xv(){}
w(xv,Pt);xv.prototype.j=function(){return mv};
xv.prototype.h=function(a){return Rr(a,Fk)};
xv.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.serializedShareEntity&&(a.serializedSharedEntity=b.serializedShareEntity);c.includeListId&&(a.includeListId=!0)};var yv=new or("NETWORK_SLI_TOKEN");function zv(a){this.h=a}
zv.prototype.fetch=function(a,b,c){var d=this,e,f,g;return A(function(h){d.h&&(e=bc(cc(5,rc(a,"key")))||"/UNKNOWN_PATH",d.h.start(e));f=b;R("wug_networking_gzip_request")&&(f=Jp(b));g=new window.Request(a,f);return h.return(fetch(g).then(function(k){return d.handleResponse(k,c)}).catch(function(k){Ks(k)}))})};
zv.prototype.handleResponse=function(a,b){var c=a.text().then(function(d){return(null==b?0:b.se)?hg(b.se,d):JSON.parse(d.replace(")]}'",""))});
a.redirected||a.ok?this.h&&this.h.success():(this.h&&this.h.Rf(),c=c.then(function(d){Ks(new T("Error: API fetch failed",a.status,a.url,d));return Object.assign({},d,{errorMetadata:{status:a.status}})}));
return c};
zv[nr]=[new pr(yv)];var Av=new or("NETWORK_MANAGER_TOKEN");var Bv;function Cv(){var a,b,c;return A(function(d){if(1==d.h)return a=ur().resolve(lv),a?d.yield(gv(a),2):(Ks(Error("InnertubeTransportService unavailable in fetchDatasyncIds")),d.return(void 0));if(b=d.i){if(b.errorMetadata)return Ks(Error("Datasync IDs fetch responded with "+b.errorMetadata.status+": "+b.error)),d.return(void 0);c=b.Pf;return d.return(c)}Ks(Error("Network request to get Datasync IDs failed."));return d.return(void 0)})}
;var Dv=B.caches,Ev;function Fv(a){var b=a.indexOf(":");return-1===b?{rd:a}:{rd:a.substring(0,b),datasyncId:a.substring(b+1)}}
function Gv(){return A(function(a){if(void 0!==Ev)return a.return(Ev);Ev=new Promise(function(b){var c;return A(function(d){switch(d.h){case 1:return za(d,2),d.yield(Dv.open("test-only"),4);case 4:return d.yield(Dv.delete("test-only"),5);case 5:d.h=3;d.l=0;break;case 2:if(c=Aa(d),c instanceof Error&&"SecurityError"===c.name)return b(!1),d.return();case 3:b("caches"in window),d.h=0}})});
return a.return(Ev)})}
function Hv(a){var b,c,d,e,f,g,h;A(function(k){if(1==k.h)return k.yield(Gv(),2);if(3!=k.h){if(!k.i)return k.return(!1);b=[];return k.yield(Dv.keys(),3)}c=k.i;d=v(c);for(e=d.next();!e.done;e=d.next())f=e.value,g=Fv(f),h=g.datasyncId,!h||a.includes(h)||b.push(Dv.delete(f));return k.return(Promise.all(b).then(function(l){return l.some(function(n){return n})}))})}
function Iv(){var a,b,c,d,e,f,g;return A(function(h){if(1==h.h)return h.yield(Gv(),2);if(3!=h.h){if(!h.i)return h.return(!1);a=pm("cache contains other");return h.yield(Dv.keys(),3)}b=h.i;c=v(b);for(d=c.next();!d.done;d=c.next())if(e=d.value,f=Fv(e),(g=f.datasyncId)&&g!==a)return h.return(!0);return h.return(!1)})}
;function Jv(){Cv().then(function(a){a&&(yo(a),Hv(a),Zt(a))})}
function Kv(){var a=new Bq;ti.oa(function(){var b,c,d,e;return A(function(f){switch(f.h){case 1:if(R("ytidb_clear_optimizations_killswitch")){f.v(2);break}b=pm("clear");if(b.startsWith("V")&&b.endsWith("||")){var g=[b];yo(g);Hv(g);Zt(g);return f.return()}c=$t();return f.yield(Iv(),3);case 3:return d=f.i,f.yield(zo(),4);case 4:if(e=f.i,!c&&!d&&!e)return f.return();case 2:a.wa()?Jv():a.h.add("publicytnetworkstatus-online",Jv,!0,void 0,void 0),f.h=0}})})}
;var Sh=ka(["data-"]);function Lv(a){a&&(a.dataset?a.dataset[Mv("loaded")]="true":Rh(a))}
function Nv(a,b){return a?a.dataset?a.dataset[Mv(b)]:a.getAttribute("data-"+b):null}
var Ov={};function Mv(a){return Ov[a]||(Ov[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var Pv=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Qv=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function Rv(a,b,c){c=void 0===c?null:c;if(window.spf&&spf.script){c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Pv,""),c=c.replace(Qv,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else Sv(a,b,c)}
function Sv(a,b,c){c=void 0===c?null:c;var d=Tv(a),e=document.getElementById(d),f=e&&Nv(e,"loaded"),g=e&&!f;f?b&&b():(b&&(f=hr(d,b),b=""+Pa(b),Uv[b]=f),g||(e=Vv(a,d,function(){if(!Nv(e,"loaded")){Lv(e);kr(d);var h=Va(lr,d);ql(h,0)}},c)))}
function Vv(a,b,c,d){d=void 0===d?null:d;var e=Id("SCRIPT");e.id=b;e.onload=function(){c&&setTimeout(c,0)};
e.onreadystatechange=function(){switch(e.readyState){case "loaded":case "complete":e.onload()}};
d&&e.setAttribute("nonce",d);Xh(e,uk(a));a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(e,a.firstChild);return e}
function Wv(a){a=Tv(a);var b=document.getElementById(a);b&&(lr(a),b.parentNode.removeChild(b))}
function Xv(a,b){a&&b&&(a=""+Pa(b),(a=Uv[a])&&jr(a))}
function Tv(a){var b=document.createElement("a");Nh(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+$b(a)}
var Uv={};var Yv=[],Zv=!1;function $v(){if(!R("disable_biscotti_fetch_for_ad_blocker_detection")&&!R("disable_biscotti_fetch_entirely_for_all_web_clients")&&ot()){var a=P("PLAYER_VARS",{});if("1"!=qb(a)&&!pt(a)){var b=function(){Zv=!0;"google_ad_status"in window?Sk("DCLKSTAT",1):Sk("DCLKSTAT",2)};
try{Rv("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}Yv.push(ti.oa(function(){if(!(Zv||"google_ad_status"in window)){try{Xv("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}Zv=!0;Sk("DCLKSTAT",3)}},5E3))}}}
function aw(){var a=Number(P("DCLKSTAT",0));return isNaN(a)?0:a}
;function bw(a){Dr.call(this,void 0===a?"document_active":a);var b=this;this.l=10;this.h=new Map;this.transitions=[{from:"document_active",to:"document_disposed_preventable",action:this.ga},{from:"document_active",to:"document_disposed",action:this.m},{from:"document_disposed_preventable",to:"document_disposed",action:this.m},{from:"document_disposed_preventable",to:"flush_logs",action:this.G},{from:"document_disposed_preventable",to:"document_active",action:this.i},{from:"document_disposed",to:"flush_logs",
action:this.G},{from:"document_disposed",to:"document_active",action:this.i},{from:"document_disposed",to:"document_disposed",action:function(){}},
{from:"flush_logs",to:"document_active",action:this.i}];window.addEventListener("pagehide",function(c){b.transition("document_disposed",{event:c})});
window.addEventListener("beforeunload",function(c){b.transition("document_disposed_preventable",{event:c})})}
w(bw,Dr);bw.prototype.ga=function(a,b){if(!this.h.get("document_disposed_preventable")){a(null==b?void 0:b.event);var c,d;if((null==b?0:null==(c=b.event)?0:c.defaultPrevented)||(null==b?0:null==(d=b.event)?0:d.returnValue)){b.event.returnValue||(b.event.returnValue=!0);b.event.defaultPrevented||b.event.preventDefault();this.h=new Map;this.transition("document_active");return}}this.h.set("document_disposed_preventable",!0);this.h.get("document_disposed")?this.transition("flush_logs"):this.transition("document_disposed")};
bw.prototype.m=function(a,b){this.h.get("document_disposed")?this.transition("document_active"):(a(null==b?void 0:b.event),this.h.set("document_disposed",!0),this.transition("flush_logs"))};
bw.prototype.G=function(a,b){a(null==b?void 0:b.event);this.transition("document_active")};
bw.prototype.i=function(){this.h=new Map};function cw(a){Dr.call(this,void 0===a?"document_visibility_unknown":a);var b=this;this.transitions=[{from:"document_visibility_unknown",to:"document_visible",action:this.i},{from:"document_visibility_unknown",to:"document_hidden",action:this.h},{from:"document_visibility_unknown",to:"document_foregrounded",action:this.G},{from:"document_visibility_unknown",to:"document_backgrounded",action:this.m},{from:"document_visible",to:"document_hidden",action:this.h},{from:"document_visible",to:"document_foregrounded",
action:this.G},{from:"document_visible",to:"document_visible",action:this.i},{from:"document_foregrounded",to:"document_visible",action:this.i},{from:"document_foregrounded",to:"document_hidden",action:this.h},{from:"document_foregrounded",to:"document_foregrounded",action:this.G},{from:"document_hidden",to:"document_visible",action:this.i},{from:"document_hidden",to:"document_backgrounded",action:this.m},{from:"document_hidden",to:"document_hidden",action:this.h},{from:"document_backgrounded",to:"document_hidden",
action:this.h},{from:"document_backgrounded",to:"document_backgrounded",action:this.m},{from:"document_backgrounded",to:"document_visible",action:this.i}];document.addEventListener("visibilitychange",function(c){"visible"===document.visibilityState?b.transition("document_visible",{event:c}):b.transition("document_hidden",{event:c})});
R("visibility_lifecycles_dynamic_backgrounding")&&(window.addEventListener("blur",function(c){b.transition("document_backgrounded",{event:c})}),window.addEventListener("focus",function(c){b.transition("document_foregrounded",{event:c})}))}
w(cw,Dr);cw.prototype.i=function(a,b){a(null==b?void 0:b.event);R("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_foregrounded")};
cw.prototype.h=function(a,b){a(null==b?void 0:b.event);R("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_backgrounded")};
cw.prototype.m=function(a,b){a(null==b?void 0:b.event)};
cw.prototype.G=function(a,b){a(null==b?void 0:b.event)};function dw(){this.l=new bw;this.m=new cw}
dw.prototype.install=function(){var a=Ia.apply(0,arguments),b=this;a.forEach(function(c){b.l.install(c)});
a.forEach(function(c){b.m.install(c)})};function ew(a){bp.call(this,1,arguments);this.csn=a}
w(ew,bp);var kp=new cp("screen-created",ew),fw=[],gw=0,hw=new Map,iw=new Map,jw=new Map;
function kw(a,b,c,d,e){e=void 0===e?!1:e;for(var f=lw({cttAuthInfo:ct(b)||void 0},b),g=v(d),h=g.next();!h.done;h=g.next()){h=h.value;var k=h.getAsJson();(ob(k)||!k.trackingParams&&!k.veType)&&Ks(Error("Child VE logged with no data"));if(R("no_client_ve_attach_unless_shown")){var l=mw(h,b);if(k.veType&&!iw.has(l)&&!jw.has(l)&&!e){hw.set(l,[a,b,c,h]);return}h=mw(c,b);hw.has(h)?nw(c,b):jw.set(h,!0)}}d=d.filter(function(n){n.csn!==b?(n.csn=b,n=!0):n=!1;return n});
c={csn:b,parentVe:c.getAsJson(),childVes:gb(d,function(n){return n.getAsJson()})};
"UNDEFINED_CSN"===b?ow("visualElementAttached",f,c):a?Cs("visualElementAttached",c,a,f):jn("visualElementAttached",c,f)}
function ow(a,b,c){fw.push({Ce:a,payload:c,Uf:void 0,options:b});gw||(gw=lp())}
function mp(a){if(fw){for(var b=v(fw),c=b.next();!c.done;c=b.next())c=c.value,c.payload&&(c.payload.csn=a.csn,jn(c.Ce,c.payload,c.options));fw.length=0}gw=0}
function mw(a,b){return""+a.getAsJson().veType+a.getAsJson().veCounter+b}
function nw(a,b){a=mw(a,b);hw.has(a)&&(b=hw.get(a)||[],kw(b[0],b[1],b[2],[b[3]],!0),hw.delete(a))}
function lw(a,b){R("log_sequence_info_on_gel_web")&&(a.sequenceGroup=b);return a}
;function pw(){this.l=[];this.i=new Map;this.h=new Map;this.j=new Set}
pw.prototype.clickCommand=function(a,b,c){var d=a.clickTrackingParams;c=void 0===c?0:c;if(d)if(c=at(void 0===c?0:c)){a=this.client;d=new Us({trackingParams:d});var e=void 0;if(R("no_client_ve_attach_unless_shown")){var f=mw(d,c);iw.set(f,!0);nw(d,c)}e=e||"INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK";f=lw({cttAuthInfo:ct(c)||void 0},c);d={csn:c,ve:d.getAsJson(),gestureType:e};b&&(d.clientData=b);"UNDEFINED_CSN"===c?ow("visualElementGestured",f,d):a?Cs("visualElementGestured",d,a,f):jn("visualElementGestured",
d,f);b=!0}else b=!1;else b=!1;return b};
pw.prototype.stateChanged=function(a,b,c){this.visualElementStateChanged(new Us({trackingParams:a}),b,void 0===c?0:c)};
pw.prototype.visualElementStateChanged=function(a,b,c){c=void 0===c?0:c;if(0===c&&this.j.has(c))this.l.push([a,b]);else{var d=c;d=void 0===d?0:d;c=at(d);a||(a=(a=Ys(void 0===d?0:d))?new Us({veType:a,youtubeData:void 0,jspbYoutubeData:void 0}):null);var e=a;c&&e&&(a=this.client,d=lw({cttAuthInfo:ct(c)||void 0},c),b={csn:c,ve:e.getAsJson(),clientData:b},"UNDEFINED_CSN"===c?ow("visualElementStateChanged",d,b):a?Cs("visualElementStateChanged",b,a,d):jn("visualElementStateChanged",b,d))}};
function qw(a,b){if(void 0===b)for(var c=$s(),d=0;d<c.length;d++)void 0!==c[d]&&qw(a,c[d]);else a.i.forEach(function(e,f){(f=a.h.get(f))&&kw(a.client,b,f,e)}),a.i.clear(),a.h.clear()}
;function rw(){dw.call(this);var a={};this.install((a.document_disposed={callback:this.h},a));R("combine_ve_grafts")&&(a={},this.install((a.document_disposed={callback:this.i},a)));a={};this.install((a.flush_logs={callback:this.j},a))}
w(rw,dw);rw.prototype.j=function(){jn("finalPayload",{csn:at()})};
rw.prototype.h=function(){Os(Ps)};
rw.prototype.i=function(){var a=qw;pw.h||(pw.h=new pw);a(pw.h)};function sw(){}
function tw(){var a=D("ytglobal.storage_");a||(a=new sw,C("ytglobal.storage_",a));return a}
sw.prototype.estimate=function(){var a,b,c;return A(function(d){a=navigator;return(null==(b=a.storage)?0:b.estimate)?d.return(a.storage.estimate()):(null==(c=a.webkitTemporaryStorage)?0:c.queryUsageAndQuota)?d.return(uw()):d.return()})};
function uw(){var a=navigator;return new Promise(function(b,c){var d;null!=(d=a.webkitTemporaryStorage)&&d.queryUsageAndQuota?a.webkitTemporaryStorage.queryUsageAndQuota(function(e,f){b({usage:e,quota:f})},function(e){c(e)}):c(Error("webkitTemporaryStorage is not supported."))})}
C("ytglobal.storageClass_",sw);function gn(a,b){var c=this;this.handleError=a;this.h=b;this.i=!1;void 0===self.document||self.addEventListener("beforeunload",function(){c.i=!0});
this.j=Math.random()<=ll("ytidb_transaction_ended_event_rate_limit_session",.2)}
gn.prototype.Ob=function(a){this.handleError(a)};
gn.prototype.logEvent=function(a,b){switch(a){case "IDB_DATA_CORRUPTED":R("idb_data_corrupted_killswitch")||this.h("idbDataCorrupted",b);break;case "IDB_UNEXPECTEDLY_CLOSED":this.h("idbUnexpectedlyClosed",b);break;case "IS_SUPPORTED_COMPLETED":R("idb_is_supported_completed_killswitch")||this.h("idbIsSupportedCompleted",b);break;case "QUOTA_EXCEEDED":vw(this,b);break;case "TRANSACTION_ENDED":this.j&&Math.random()<=ll("ytidb_transaction_ended_event_rate_limit_transaction",.1)&&this.h("idbTransactionEnded",
b);break;case "TRANSACTION_UNEXPECTEDLY_ABORTED":a=Object.assign({},b,{hasWindowUnloaded:this.i}),this.h("idbTransactionAborted",a)}};
function vw(a,b){tw().estimate().then(function(c){c=Object.assign({},b,{isSw:void 0===self.document,isIframe:self!==self.top,deviceStorageUsageMbytes:ww(null==c?void 0:c.usage),deviceStorageQuotaMbytes:ww(null==c?void 0:c.quota)});a.h("idbQuotaExceeded",c)})}
function ww(a){return"undefined"===typeof a?"-1":String(Math.ceil(a/1048576))}
;function xw(a,b,c){F.call(this);var d=this;c=c||P("POST_MESSAGE_ORIGIN")||window.document.location.protocol+"//"+window.document.location.hostname;this.i=b||null;this.targetOrigin="*";this.j=c;this.sessionId=null;this.channel="widget";this.B=!!a;this.s=function(e){a:if(!("*"!=d.j&&e.origin!=d.j||d.i&&e.source!=d.i||"string"!==typeof e.data)){try{var f=JSON.parse(e.data)}catch(g){break a}if(!(null==f||d.B&&(d.sessionId&&d.sessionId!=f.id||d.channel&&d.channel!=f.channel))&&f)switch(f.event){case "listening":"null"!=
e.origin&&(d.j=d.targetOrigin=e.origin);d.i=e.source;d.sessionId=f.id;d.h&&(d.h(),d.h=null);break;case "command":d.l&&(!d.m||0<=db(d.m,f.func))&&d.l(f.func,f.args,e.origin)}}};
this.m=this.h=this.l=null;window.addEventListener("message",this.s)}
w(xw,F);xw.prototype.sendMessage=function(a,b){if(b=b||this.i){this.sessionId&&(a.id=this.sessionId);this.channel&&(a.channel=this.channel);try{var c=JSON.stringify(a);b.postMessage(c,this.targetOrigin)}catch(d){Yk(d)}}};
xw.prototype.M=function(){window.removeEventListener("message",this.s);F.prototype.M.call(this)};function yw(){this.i=[];this.isReady=!1;this.j={};var a=this.h=new xw(!!P("WIDGET_ID_ENFORCE")),b=this.Fe.bind(this);a.l=b;a.m=null;this.h.channel="widget";if(a=P("WIDGET_ID"))this.h.sessionId=a}
m=yw.prototype;m.Fe=function(a,b,c){"addEventListener"===a&&b?this.Ec(b[0],c):this.Uc(a,b,c)};
m.Uc=function(){};
m.yc=function(a){var b=this;return function(c){return b.sendMessage(a,c)}};
m.Ec=function(a,b){this.j[a]||"onReady"===a||(this.addEventListener(a,this.yc(a,b)),this.j[a]=!0)};
m.addEventListener=function(){};
m.ce=function(){this.isReady=!0;this.sendMessage("initialDelivery",this.Bc());this.sendMessage("onReady");eb(this.i,this.yd,this);this.i=[]};
m.Bc=function(){return null};
function zw(a,b){a.sendMessage("infoDelivery",b)}
m.yd=function(a){this.isReady?this.h.sendMessage(a):this.i.push(a)};
m.sendMessage=function(a,b){this.yd({event:a,info:void 0===b?null:b})};
m.dispose=function(){this.h=null};var Aw={},Bw=(Aw["api.invalidparam"]=2,Aw.auth=150,Aw["drm.auth"]=150,Aw["heartbeat.net"]=150,Aw["heartbeat.servererror"]=150,Aw["heartbeat.stop"]=150,Aw["html5.unsupportedads"]=5,Aw["fmt.noneavailable"]=5,Aw["fmt.decode"]=5,Aw["fmt.unplayable"]=5,Aw["html5.missingapi"]=5,Aw["html5.unsupportedlive"]=5,Aw["drm.unavailable"]=5,Aw["mrm.blocked"]=151,Aw);var Cw=new Set("endSeconds startSeconds mediaContentUrl suggestedQuality videoId rct rctn".split(" "));function Dw(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function Ew(a,b,c){if("string"===typeof a)return{videoId:a,startSeconds:b,suggestedQuality:c};b={};c=v(Cw);for(var d=c.next();!d.done;d=c.next())d=d.value,a[d]&&(b[d]=a[d]);return b}
function Fw(a,b,c,d){if(Oa(a)&&!Array.isArray(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}b={index:b,startSeconds:c,suggestedQuality:d};"string"===typeof a&&16===a.length?b.list="PL"+a:b.playlist=a;return b}
;function Gw(a){yw.call(this);this.listeners=[];this.l=!1;this.api=a;this.addEventListener("onReady",this.onReady.bind(this));this.addEventListener("onVideoProgress",this.Re.bind(this));this.addEventListener("onVolumeChange",this.Se.bind(this));this.addEventListener("onApiChange",this.Me.bind(this));this.addEventListener("onPlaybackQualityChange",this.Oe.bind(this));this.addEventListener("onPlaybackRateChange",this.Pe.bind(this));this.addEventListener("onStateChange",this.Qe.bind(this));this.addEventListener("onWebglSettingsChanged",
this.Te.bind(this))}
w(Gw,yw);m=Gw.prototype;
m.Uc=function(a,b,c){if(this.api.isExternalMethodAvailable(a,c)){b=b||[];if(0<b.length&&Dw(a)){var d=b;if(Oa(d[0])&&!Array.isArray(d[0]))var e=d[0];else switch(e={},a){case "loadVideoById":case "cueVideoById":e=Ew(d[0],void 0!==d[1]?Number(d[1]):void 0,d[2]);break;case "loadVideoByUrl":case "cueVideoByUrl":e=d[0];"string"===typeof e&&(e={mediaContentUrl:e,startSeconds:void 0!==d[1]?Number(d[1]):void 0,suggestedQuality:d[2]});b:{if((d=e.mediaContentUrl)&&(d=/\/([ve]|embed)\/([^#?]+)/.exec(d))&&d[2]){d=
d[2];break b}d=null}e.videoId=d;e=Ew(e);break;case "loadPlaylist":case "cuePlaylist":e=Fw(d[0],d[1],d[2],d[3])}b.length=1;b[0]=e}this.api.handleExternalCall(a,b,c);Dw(a)&&zw(this,this.Bc())}};
m.Ec=function(a,b){"onReady"===a?this.api.logApiCall(a+" invocation",b):"onError"===a&&this.l&&(this.api.logApiCall(a+" invocation",b,this.errorCode),this.errorCode=void 0);this.api.logApiCall(a+" registration",b);yw.prototype.Ec.call(this,a,b)};
m.yc=function(a,b){var c=this,d=yw.prototype.yc.call(this,a,b);return function(e){"onError"===a?c.api.logApiCall(a+" invocation",b,e):c.api.logApiCall(a+" invocation",b);d(e)}};
m.onReady=function(){var a=this.ce.bind(this);this.h.h=a;a=this.api.getVideoData();if(!a.isPlayable){this.l=!0;a=a.errorCode;var b=void 0===b?5:b;this.errorCode=a?Bw[a]||b:b;this.sendMessage("onError",this.errorCode.toString())}};
m.addEventListener=function(a,b){this.listeners.push({eventType:a,listener:b});this.api.addEventListener(a,b)};
m.Bc=function(){if(!this.api)return null;var a=this.api.getApiInterface();jb(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c];if(0===e.search("get")||0===e.search("is")){var f=0;0===e.search("get")?f=3:0===e.search("is")&&(f=2);f=e.charAt(f).toLowerCase()+e.substr(f+1);try{var g=this.api[e]();b[f]=g}catch(h){}}}b.videoData=this.api.getVideoData();b.currentTimeLastUpdated_=Date.now()/1E3;return b};
m.Qe=function(a){a={playerState:a,currentTime:this.api.getCurrentTime(),duration:this.api.getDuration(),videoData:this.api.getVideoData(),videoStartBytes:0,videoBytesTotal:this.api.getVideoBytesTotal(),videoLoadedFraction:this.api.getVideoLoadedFraction(),playbackQuality:this.api.getPlaybackQuality(),availableQualityLevels:this.api.getAvailableQualityLevels(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getVideoUrl&&
(a.videoUrl=this.api.getVideoUrl());this.api.getVideoContentRect&&(a.videoContentRect=this.api.getVideoContentRect());this.api.getProgressState&&(a.progressState=this.api.getProgressState());this.api.getPlaylist&&(a.playlist=this.api.getPlaylist());this.api.getPlaylistIndex&&(a.playlistIndex=this.api.getPlaylistIndex());this.api.getStoryboardFormat&&(a.storyboardFormat=this.api.getStoryboardFormat());zw(this,a)};
m.Oe=function(a){zw(this,{playbackQuality:a})};
m.Pe=function(a){zw(this,{playbackRate:a})};
m.Me=function(){for(var a=this.api.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.api.getOptions(e);a.join(", ");b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var k=f[g],l=this.api.getOption(e,k);b[e][k]=l}}this.sendMessage("apiInfoDelivery",b)};
m.Se=function(){zw(this,{muted:this.api.isMuted(),volume:this.api.getVolume()})};
m.Re=function(a){a={currentTime:a,videoBytesLoaded:this.api.getVideoBytesLoaded(),videoLoadedFraction:this.api.getVideoLoadedFraction(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getProgressState&&(a.progressState=this.api.getProgressState());zw(this,a)};
m.Te=function(){var a={sphericalProperties:this.api.getSphericalProperties()};zw(this,a)};
m.dispose=function(){yw.prototype.dispose.call(this);for(var a=0;a<this.listeners.length;a++){var b=this.listeners[a];this.api.removeEventListener(b.eventType,b.listener)}this.listeners=[]};function Hw(a){F.call(this);this.h={};this.started=!1;this.connection=a;this.connection.subscribe("command",this.ud,this)}
w(Hw,F);m=Hw.prototype;m.start=function(){this.started||this.Z()||(this.started=!0,this.connection.kb("RECEIVING"))};
m.kb=function(a,b){this.started&&!this.Z()&&this.connection.kb(a,b)};
m.ud=function(a,b,c){if(this.started&&!this.Z()){var d=b||{};switch(a){case "addEventListener":"string"===typeof d.event&&this.addListener(d.event);break;case "removeEventListener":"string"===typeof d.event&&this.removeListener(d.event);break;default:this.api.isReady()&&this.api.isExternalMethodAvailable(a,c||null)&&(b=Iw(a,b||{}),c=this.api.handleExternalCall(a,b,c||null),(c=Jw(a,c))&&this.kb(a,c))}}};
m.addListener=function(a){if(!(a in this.h)){var b=this.Ne.bind(this,a);this.h[a]=b;this.addEventListener(a,b)}};
m.Ne=function(a,b){this.started&&!this.Z()&&this.connection.kb(a,this.Ac(a,b))};
m.Ac=function(a,b){if(null!=b)return{value:b}};
m.removeListener=function(a){a in this.h&&(this.removeEventListener(a,this.h[a]),delete this.h[a])};
m.M=function(){this.connection.unsubscribe("command",this.ud,this);this.connection=null;for(var a in this.h)this.h.hasOwnProperty(a)&&this.removeListener(a);F.prototype.M.call(this)};function Kw(a,b){Hw.call(this,b);this.api=a;this.start()}
w(Kw,Hw);Kw.prototype.addEventListener=function(a,b){this.api.addEventListener(a,b)};
Kw.prototype.removeEventListener=function(a,b){this.api.removeEventListener(a,b)};
function Iw(a,b){switch(a){case "loadVideoById":return a=Ew(b),[a];case "cueVideoById":return a=Ew(b),[a];case "loadVideoByPlayerVars":return[b];case "cueVideoByPlayerVars":return[b];case "loadPlaylist":return a=Fw(b),[a];case "cuePlaylist":return a=Fw(b),[a];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];case "setLoop":return[b.loopPlaylists];
case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey,b.ctrlKey,b.altKey,b.metaKey,b.key,b.code]}return[]}
function Jw(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
Kw.prototype.Ac=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return Hw.prototype.Ac.call(this,a,b)};
Kw.prototype.M=function(){Hw.prototype.M.call(this);delete this.api};function Lw(a){a=void 0===a?!1:a;F.call(this);this.h=new K(a);yc(this,this.h)}
Xa(Lw,F);Lw.prototype.subscribe=function(a,b,c){return this.Z()?0:this.h.subscribe(a,b,c)};
Lw.prototype.unsubscribe=function(a,b,c){return this.Z()?!1:this.h.unsubscribe(a,b,c)};
Lw.prototype.l=function(a,b){this.Z()||this.h.Ya.apply(this.h,arguments)};function Mw(a,b,c){Lw.call(this);this.j=a;this.i=b;this.id=c}
w(Mw,Lw);Mw.prototype.kb=function(a,b){this.Z()||this.j.kb(this.i,this.id,a,b)};
Mw.prototype.M=function(){this.i=this.j=null;Lw.prototype.M.call(this)};function Nw(a,b,c){F.call(this);this.h=a;this.origin=c;this.i=Wq(window,"message",this.j.bind(this));this.connection=new Mw(this,a,b);yc(this,this.connection)}
w(Nw,F);Nw.prototype.kb=function(a,b,c,d){this.Z()||a!==this.h||(a={id:b,command:c},d&&(a.data=d),this.h.postMessage(JSON.stringify(a),this.origin))};
Nw.prototype.j=function(a){if(!this.Z()&&a.origin===this.origin){var b=a.data;if("string"===typeof b){try{b=JSON.parse(b)}catch(d){return}if(b.command){var c=this.connection;c.Z()||c.l("command",b.command,b.data,a.origin)}}}};
Nw.prototype.M=function(){Xq(this.i);this.h=null;F.prototype.M.call(this)};function Ow(){this.state=1;this.h=null}
m=Ow.prototype;m.initialize=function(a,b,c){if(a.program){var d,e=null!=(d=a.interpreterUrl)?d:null;if(a.interpreterSafeScript){d=a.interpreterSafeScript.privateDoNotAccessOrElseSafeScriptWrappedValue||"";var f=xb();d=f?f.createScript(d):d;d=new Cb(d,Bb)}else d=null!=(f=a.interpreterScript)?f:null;a.interpreterSafeUrl&&(e=a.interpreterSafeUrl,zb("From proto message. b/166824318"),e=Gb(e.privateDoNotAccessOrElseTrustedResourceUrlWrappedValue||"").toString());Pw(this,d,e,a.program,b,c)}else Ks(Error("Cannot initialize botguard without program"))};
function Pw(a,b,c,d,e,f){var g=void 0===g?"trayride":g;c?(a.state=2,Rv(c,function(){window[g]?Qw(a,d,g,e):(a.state=3,Wv(c),Ks(new T("Unable to load Botguard","from "+c)))},f)):b?(f=Id("SCRIPT"),b instanceof Cb?(b instanceof Cb&&b.constructor===Cb?b=b.h:(Ma(b),b="type_error:SafeScript"),f.textContent=b,Wh(f)):f.textContent=b,f.nonce=Yb(),document.head.appendChild(f),document.head.removeChild(f),window[g]?Qw(a,d,g,e):(a.state=4,Ks(new T("Unable to load Botguard from JS")))):Ks(new T("Unable to load VM; no url or JS provided"))}
function Qw(a,b,c,d){a.state=5;try{var e=new Jh({program:b,he:c,Ge:R("att_web_record_metrics")});e.We.then(function(){a.state=6;d&&d(b)});
a.Pc(e)}catch(f){a.state=7,f instanceof Error&&Ks(f)}}
m.invoke=function(a){a=void 0===a?{}:a;return this.Sc()?this.Hd({dd:a}):null};
m.dispose=function(){this.Pc(null);this.state=8};
m.Sc=function(){return!!this.h};
m.Hd=function(a){return this.h.Bd(a)};
m.Pc=function(a){wc(this.h);this.h=a};function Rw(){var a=D("yt.abuse.playerAttLoader");return a&&["bgvma","bgvmb","bgvmc"].every(function(b){return b in a})?a:null}
;function Sw(){Ow.apply(this,arguments)}
w(Sw,Ow);Sw.prototype.Pc=function(a){var b;null==(b=Rw())||b.bgvma();a?(b={bgvma:a.dispose.bind(a),bgvmb:a.snapshot.bind(a),bgvmc:a.Bd.bind(a)},C("yt.abuse.playerAttLoader",b),C("yt.abuse.playerAttLoaderRun",function(c){return a.snapshot(c)})):(C("yt.abuse.playerAttLoader",null),C("yt.abuse.playerAttLoaderRun",null))};
Sw.prototype.Sc=function(){return!!Rw()};
Sw.prototype.Hd=function(a){return Rw().bgvmc(a)};var Tw=new Sw;function Uw(){return Tw.Sc()}
function Vw(a){a=void 0===a?{}:a;return Tw.invoke(a)}
;function Ww(a){a=a||{};var b={},c={};this.url=a.url||"";this.args=a.args||sb(b);this.assets=a.assets||{};this.attrs=a.attrs||sb(c);this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
Ww.prototype.clone=function(){var a=new Ww,b;for(b in this)if(this.hasOwnProperty(b)){var c=this[b];"object"==Ma(c)?a[b]=sb(c):a[b]=c}return a};var Xw=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function Yw(a){a=a||"";if(window.spf){var b=a.match(Xw);spf.style.load(a,b?b[1]:"",void 0)}else Zw(a)}
function Zw(a){var b=$w(a),c=document.getElementById(b),d=c&&Nv(c,"loaded");d||c&&!d||(c=ax(a,b,function(){if(!Nv(c,"loaded")){Lv(c);kr(b);var e=Va(lr,b);ql(e,0)}}))}
function ax(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=uk(a);Vh(d,a);(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function $w(a){var b=Id("A");Nh(b,new Ib(a,Jb));a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+$b(a)}
;function bx(){F.call(this);this.h=[]}
w(bx,F);bx.prototype.M=function(){for(;this.h.length;){var a=this.h.pop();a.target.removeEventListener(a.name,a.callback,void 0)}F.prototype.M.call(this)};function cx(){bx.apply(this,arguments)}
w(cx,bx);function dx(a,b,c,d,e){F.call(this);var f=this;this.l=b;this.webPlayerContextConfig=d;this.uc=e;this.Ba=!1;this.api={};this.ea=this.s=null;this.S=new K;this.h={};this.Y=this.ma=this.elementId=this.Ia=this.config=null;this.W=!1;this.j=this.B=null;this.na={};this.vc=["onReady"];this.lastError=null;this.ob=NaN;this.R={};this.Md=new cx(this);this.da=0;this.i=this.m=a;yc(this,this.S);ex(this);fx(this);yc(this,this.Md);c?this.da=ql(function(){f.loadNewVideoConfig(c)},0):d&&(gx(this),hx(this))}
w(dx,F);m=dx.prototype;m.getId=function(){return this.l};
m.loadNewVideoConfig=function(a){if(!this.Z()){this.da&&(window.clearTimeout(this.da),this.da=0);var b=a||{};b instanceof Ww||(b=new Ww(b));this.config=b;this.setConfig(a);hx(this);this.isReady()&&ix(this)}};
function gx(a){var b;a.webPlayerContextConfig?b=a.webPlayerContextConfig.rootElementId:b=a.config.attrs.id;a.elementId=b||a.elementId;"video-player"===a.elementId&&(a.elementId=a.l,a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.l:a.config.attrs.id=a.l);var c;(null==(c=a.i)?void 0:c.id)===a.elementId&&(a.elementId+="-player",a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.elementId:a.config.attrs.id=a.elementId)}
m.setConfig=function(a){this.Ia=a;this.config=jx(a);gx(this);if(!this.ma){var b;this.ma=kx(this,(null==(b=this.config.args)?void 0:b.jsapicallback)||"onYouTubePlayerReady")}this.config.args?this.config.args.jsapicallback=null:this.config.args={jsapicallback:null};var c;if(null==(c=this.config)?0:c.attrs)a=this.config.attrs,(b=a.width)&&this.i&&(this.i.style.width=li(Number(b)||b)),(a=a.height)&&this.i&&(this.i.style.height=li(Number(a)||a))};
function ix(a){if(a.config&&!0!==a.config.loaded)if(a.config.loaded=!0,!a.config.args||"0"!==a.config.args.autoplay&&0!==a.config.args.autoplay&&!1!==a.config.args.autoplay){var b;a.api.loadVideoByPlayerVars(null!=(b=a.config.args)?b:null)}else a.api.cueVideoByPlayerVars(a.config.args)}
function lx(a){var b=!0,c=mx(a);c&&a.config&&(a=nx(a),b=Nv(c,"version")===a);return b&&!!D("yt.player.Application.create")}
function hx(a){if(!a.Z()&&!a.W){var b=lx(a);if(b&&"html5"===(mx(a)?"html5":null))a.Y="html5",a.isReady()||ox(a);else if(px(a),a.Y="html5",b&&a.j&&a.m)a.m.appendChild(a.j),ox(a);else{a.config&&(a.config.loaded=!0);var c=!1;a.B=function(){c=!0;var d=qx(a,"player_bootstrap_method")?D("yt.player.Application.createAlternate")||D("yt.player.Application.create"):D("yt.player.Application.create");var e=a.config?jx(a.config):void 0;d&&d(a.m,e,a.webPlayerContextConfig,a.uc);ox(a)};
a.W=!0;b?a.B():(Rv(nx(a),a.B),(b=rx(a))&&Yw(b),sx(a)&&!c&&C("yt.player.Application.create",null))}}}
function mx(a){var b=Hd(a.elementId);!b&&a.i&&a.i.querySelector&&(b=a.i.querySelector("#"+a.elementId));return b}
function ox(a){if(!a.Z()){var b=mx(a),c=!1;b&&b.getApiInterface&&b.getApiInterface()&&(c=!0);if(c){a.W=!1;if(!qx(a,"html5_remove_not_servable_check_killswitch")){var d;if((null==b?0:b.isNotServable)&&a.config&&(null==b?0:b.isNotServable(null==(d=a.config.args)?void 0:d.video_id)))return}tx(a)}else a.ob=ql(function(){ox(a)},50)}}
function tx(a){ex(a);a.Ba=!0;var b=mx(a);if(b){a.s=ux(a,b,"addEventListener");a.ea=ux(a,b,"removeEventListener");var c=b.getApiInterface();c=c.concat(b.getInternalApiInterface());for(var d=a.api,e=0;e<c.length;e++){var f=c[e];d[f]||(d[f]=ux(a,b,f))}}for(var g in a.h)a.h.hasOwnProperty(g)&&a.s&&a.s(g,a.h[g]);ix(a);a.ma&&a.ma(a.api);a.S.Ya("onReady",a.api)}
function ux(a,b,c){var d=b[c];return function(){var e=Ia.apply(0,arguments);try{return a.lastError=null,d.apply(b,e)}catch(f){if("sendAbandonmentPing"!==c)throw f.params=c,a.lastError=f,e=new T("PlayerProxy error in method call",{error:f,method:c,playerId:a.l}),e.level="WARNING",e;}}}
function ex(a){a.Ba=!1;if(a.ea)for(var b in a.h)a.h.hasOwnProperty(b)&&a.ea(b,a.h[b]);for(var c in a.R)a.R.hasOwnProperty(c)&&window.clearTimeout(Number(c));a.R={};a.s=null;a.ea=null;b=a.api;for(var d in b)b.hasOwnProperty(d)&&(b[d]=null);b.addEventListener=function(e,f){a.addEventListener(e,f)};
b.removeEventListener=function(e,f){a.removeEventListener(e,f)};
b.destroy=function(){a.dispose()};
b.getLastError=function(){return a.getLastError()};
b.getPlayerType=function(){return a.getPlayerType()};
b.getCurrentVideoConfig=function(){return a.Ia};
b.loadNewVideoConfig=function(e){a.loadNewVideoConfig(e)};
b.isReady=function(){return a.isReady()}}
m.isReady=function(){return this.Ba};
function fx(a){a.addEventListener("WATCH_LATER_VIDEO_ADDED",function(b){kr("WATCH_LATER_VIDEO_ADDED",b)});
a.addEventListener("WATCH_LATER_VIDEO_REMOVED",function(b){kr("WATCH_LATER_VIDEO_REMOVED",b)})}
m.addEventListener=function(a,b){var c=this,d=kx(this,b);d&&(0<=db(this.vc,a)||this.h[a]||(b=vx(this,a),this.s&&this.s(a,b)),this.S.subscribe(a,d),"onReady"===a&&this.isReady()&&ql(function(){d(c.api)},0))};
m.removeEventListener=function(a,b){this.Z()||(b=kx(this,b))&&this.S.unsubscribe(a,b)};
function kx(a,b){var c=b;if("string"===typeof b){if(a.na[b])return a.na[b];c=function(){var d=Ia.apply(0,arguments),e=D(b);if(e)try{e.apply(B,d)}catch(f){throw d=new T("PlayerProxy error when executing callback",{error:f}),d.level="ERROR",d;}};
a.na[b]=c}return c?c:null}
function vx(a,b){var c="ytPlayer"+b+a.l;a.h[b]=c;B[c]=function(d){var e=ql(function(){if(!a.Z()){try{a.S.Ya(b,null!=d?d:void 0)}catch(h){var f=new T("PlayerProxy error when creating global callback",{error:h,event:b,playerId:a.l,data:d});f.level="WARNING";throw f;}f=a.R;var g=String(e);g in f&&delete f[g]}},0);
pb(a.R,String(e))};
return c}
m.getPlayerType=function(){return this.Y||(mx(this)?"html5":null)};
m.getLastError=function(){return this.lastError};
function px(a){a.cancel();ex(a);a.Y=null;a.config&&(a.config.loaded=!1);var b=mx(a);b&&(lx(a)||!sx(a)?a.j=b:(b&&b.destroy&&b.destroy(),a.j=null));if(a.m)for(a=a.m;b=a.firstChild;)a.removeChild(b)}
m.cancel=function(){this.B&&Xv(nx(this),this.B);window.clearTimeout(this.ob);this.W=!1};
m.M=function(){px(this);if(this.j&&this.config&&this.j.destroy)try{this.j.destroy()}catch(b){var a=new T("PlayerProxy error during disposal",{error:b});a.level="ERROR";throw a;}this.na=null;for(a in this.h)this.h.hasOwnProperty(a)&&(B[this.h[a]]=null);this.Ia=this.config=this.api=null;delete this.m;delete this.i;F.prototype.M.call(this)};
function sx(a){var b,c;a=null==(b=a.config)?void 0:null==(c=b.args)?void 0:c.fflags;return!!a&&-1!==a.indexOf("player_destroy_old_version=true")}
function nx(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.jsUrl:(a=a.config.assets)?a.js:""}
function rx(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.cssUrl:(a=a.config.assets)?a.css:""}
function qx(a,b){if(a.webPlayerContextConfig)var c=a.webPlayerContextConfig.serializedExperimentFlags;else{var d;if(null==(d=a.config)?0:d.args)c=a.config.args.fflags}return"true"===al(c||"","&")[b]}
function jx(a){for(var b={},c=v(Object.keys(a)),d=c.next();!d.done;d=c.next()){d=d.value;var e=a[d];b[d]="object"===typeof e?sb(e):e}return b}
;var wx={},xx="player_uid_"+(1E9*Math.random()>>>0);function yx(a,b){var c="player",d=!1;d=void 0===d?!0:d;c="string"===typeof c?Hd(c):c;var e=xx+"_"+Pa(c),f=wx[e];if(f&&d)return zx(a,b)?f.api.loadVideoByPlayerVars(a.args||null):f.loadNewVideoConfig(a),f.api;f=new dx(c,e,a,b,void 0);wx[e]=f;kr("player-added",f.api);zc(f,function(){delete wx[f.getId()]});
return f.api}
function zx(a,b){return b&&b.serializedExperimentFlags?b.serializedExperimentFlags.includes("web_player_remove_playerproxy=true"):a&&a.args&&a.args.fflags?a.args.fflags.includes("web_player_remove_playerproxy=true"):!1}
;var Ax=null,Bx=null,Cx=null;function Dx(){Ex()}
function Fx(){Ex()}
function Ex(){var a=Ax.getVideoData(1);a=a.title?a.title+" - YouTube":"YouTube";document.title!==a&&(document.title=a)}
function Gx(){Ax&&Ax.sendAbandonmentPing&&Ax.sendAbandonmentPing();P("PL_ATT")&&Tw.dispose();for(var a=ti,b=0,c=Yv.length;b<c;b++)a.qa(Yv[b]);Yv.length=0;Wv("//static.doubleclick.net/instream/ad_status.js");Zv=!1;Sk("DCLKSTAT",0);xc(Cx,Bx);Ax&&(Ax.removeEventListener("onVideoDataChange",Dx),Ax.destroy())}
;function Hx(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=P("EVENT_ID");d&&(b.ei||(b.ei=d));b&&Ut(a,b);if(c)return!1;bu(a);if((window.ytspf||{}).enabled)spf.navigate(a);else{var e=void 0===e?{}:e;var f=void 0===f?"":f;var g=void 0===g?window:g;a=mc(a,e);bu(a);f=a+f;var h=void 0===h?ei:h;a:if(h=void 0===h?ei:h,f instanceof Ib)h=f;else{for(a=0;a<h.length;++a)if(b=h[a],b instanceof ci&&b.re(f)){h=new Ib(f,Jb);break a}h=void 0}g=g.location;h=Mh(h||Kb);void 0!==h&&(g.href=h)}return!0}
;C("yt.setConfig",Sk);C("yt.config.set",Sk);C("yt.setMsg",et);C("yt.msgs.set",et);C("yt.logging.errors.log",Js);
C("writeEmbed",function(){var a=P("PLAYER_CONFIG");if(!a){var b=P("PLAYER_VARS");b&&(a={args:b})}zt(!0);"gvn"===a.args.ps&&(document.body.style.backgroundColor="transparent");a.attrs||(a.attrs={width:"100%",height:"100%",id:"video-player"});var c=document.referrer;b=P("POST_MESSAGE_ORIGIN");window!==window.top&&c&&c!==document.URL&&(a.args.loaderUrl=c);Xu("embed",["ol"]);c=P("WEB_PLAYER_CONTEXT_CONFIGS").WEB_PLAYER_CONTEXT_CONFIG_ID_EMBEDDED_PLAYER;if(!c.serializedForcedExperimentIds){var d=fl(window.location.href);
d.forced_experiments&&(c.serializedForcedExperimentIds=d.forced_experiments)}var e;(null==(e=a.args)?0:e.autoplay)&&Xu("watch",["pbs","pbu","pbp"]);Ax=yx(a,c);Ax.addEventListener("onVideoDataChange",Dx);Ax.addEventListener("onReady",Fx);a=P("POST_MESSAGE_ID","player");P("ENABLE_JS_API")?Cx=new Gw(Ax):P("ENABLE_POST_API")&&"string"===typeof a&&"string"===typeof b&&(Bx=new Nw(window.parent,a,b),Cx=new Kw(Ax,Bx.connection));$v();R("ytidb_create_logger_embed_killswitch")||fn();a={};rw.h||(rw.h=new rw);
rw.h.install((a.flush_logs={callback:function(){ps()}},a));
Mq();R("ytidb_clear_embedded_player")&&ti.oa(function(){var f,g;if(!Bv){var h=ur(),k={Mc:Av,Fd:zv};h.h.set(k.Mc,k);k={cd:{feedbackEndpoint:Lt(uv),modifyChannelNotificationPreferenceEndpoint:Lt(vv),playlistEditEndpoint:Lt(wv),subscribeEndpoint:Lt(sv),unsubscribeEndpoint:Lt(tv),webPlayerShareEntityServiceEndpoint:Lt(xv)}};var l=Jt(),n={};l&&(n.client_location=l);void 0===f&&(f=Tl());void 0===g&&(g=h.resolve(Av));fv(k,g,f,n);f={Mc:lv,Gd:ev.h};h.h.set(f.Mc,f);Bv=h.resolve(lv)}Kv()})});
var Ix=Wk(function(){av();At()}),Jx=Wk(function(a){a.persisted||(av(),At())}),Kx=Wk(function(a){R("embeds_web_enable_dispose_player_if_page_not_cached_killswitch")?Gx():a.persisted||Gx()}),Lx=Wk(Gx);
window.addEventListener?(window.addEventListener("load",Ix),window.addEventListener("pageshow",Jx),window.addEventListener("pagehide",Kx)):window.attachEvent&&(window.attachEvent("onload",Ix),window.attachEvent("onunload",Lx));
window.onerror=function(a,b,c,d,e){b=void 0===b?"Unknown file":b;c=void 0===c?0:c;var f=!1,g=Tk("log_window_onerror_fraction");if(g&&Math.random()<g)f=!0;else{g=document.getElementsByTagName("script");for(var h=0,k=g.length;h<k;h++)if(0<g[h].src.indexOf("/debug-")){f=!0;break}}f&&(f=!1,e?f=!0:("string"===typeof a?g=a:ErrorEvent&&a instanceof ErrorEvent?(f=!0,g=a.message,b=a.filename,c=a.lineno,d=a.colno):(g="Unknown error",b="Unknown file",c=0),e=new T(g),e.name="UnhandledWindowError",e.message=g,
e.fileName=b,e.lineNumber=c,isNaN(d)?delete e.columnNumber:e.columnNumber=d),f?Js(e):Ks(e))};
le=Ls;window.addEventListener("unhandledrejection",function(a){Ls(a.reason)});
eb(P("ERRORS")||[],function(a){Js.apply(null,a)});
Sk("ERRORS",[]);R("embeds_web_enable_scheduler_to_player_binary")&&Wm();C("yt.abuse.player.botguardInitialized",D("yt.abuse.player.botguardInitialized")||Uw);C("yt.abuse.player.invokeBotguard",D("yt.abuse.player.invokeBotguard")||Vw);C("yt.abuse.dclkstatus.checkDclkStatus",D("yt.abuse.dclkstatus.checkDclkStatus")||aw);C("yt.player.exports.navigate",D("yt.player.exports.navigate")||Hx);C("yt.util.activity.init",D("yt.util.activity.init")||$q);
C("yt.util.activity.getTimeSinceActive",D("yt.util.activity.getTimeSinceActive")||cr);C("yt.util.activity.setTimestamp",D("yt.util.activity.setTimestamp")||ar);}).call(this);
