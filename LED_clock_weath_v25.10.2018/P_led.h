const char P_led[] PROGMEM =  R"=====(
<html>
    <head>
        <!--meta name = "viewport" content = "width=device-width, initial-scale=1.0"-->
        <meta http-equiv = "Content-type" content = "text/html; charset=utf-8">
        <title>Led_clock_weath на ESP-12 ver:23.10.2018 (By IvanUA)</title>
        <link rel="shortcut icon" href="#" />
        <link rel = "stylesheet" type = "text/css" href = "/style.css">
        <script type = "text/javascript" src = "/function.js"></script>
        <script type = "text/javascript">
            function set_led(submit) {
                server = "/led?tbd=" + val('tbd') + "&vbd=" + val('vbd') + "&tbn=" + val('tbn') + "&vbn=" + val('vbn') + "&vba=" + val_sw('vba') + "&rotate=" + val('rotate') + "&kuOn=" + val('kuOn') + "&kuOff=" + val('kuOff');
                server += "&sensorDom=" + val('sensorDom') + "&sensorUl=" + val('sensorUl') + "&sensorHumi=" + val('sensorHumi') + "&sensorPrAl=" + val('sensorPrAl') + "&clockNight=" + val_sw('clockNight') + "&buzzerSet=" + val_sw('buzzerSet');
                send_request(submit,server);
            }
        </script>
    </head>
    <body onload = "load();">
        <header>
            <span class="opt_cn">CLOCK on ESP-12 ver: 23/10/2018 (by IvanZah)</span><br>
            <span class="opt_cn">Time on ESP:</span>
            <span id="time">{{time}}</span> 
        </header>       
        <central-unit>
            <div class="menu_unit">
                <a class="link__img" href="/index.html"><span class="ico__text">Wifi</span></a>
                <a class="link__img" href="/time.html"><span class="ico__text">Time</span></a>
                <a class="link__img" href="/mqtt.html"><span class="ico__text">Mqtt</span></a>
                <a class="link__img" href="/weather.html"><span class="ico__text">Weather</span></a>
                <a class="link__img" href="/led.html"><span class="ico__text">Setup</span></a>
                <a class="link__img" href="/help.html"><span class="ico__text">Help</span></a>
                <a class="link__img" href="#"><span class="ico__text" onclick="restart(this,'ResetESP?');">Restart</span></a>
            </div>
            <titles>
                <span class="opt_cn">Settings ESP</span>
            </titles>
            <div id="main_unit">
                <center>
                    <table>
                        <tr>
                            <td align = "right"><span class="opt_cn">Hourly Signal with:</span></td>
                            <td><select id = "kuOn">
                                <option value = "0"> 0 </option>
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>    
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                                <option value = "16"> 16 </option>
                                <option value = "17"> 17 </option>
                                <option value = "18"> 18 </option>
                                <option value = "19"> 19 </option>
                                <option value = "20"> 20 </option>
                                <option value = "21"> 21 </option>
                                <option value = "22"> 22 </option>
                                <option value = "23"> 23 </option>
                            </select></td>
                            <td align = "right"><span class="opt_cn">to:</span></td>
                            <td><select id = "kuOff">
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                                <option value = "16"> 16 </option>
                                <option value = "17"> 17 </option>
                                <option value = "18"> 18 </option>
                                <option value = "19"> 19 </option>
                                <option value = "20"> 20 </option>
                                <option value = "21"> 21 </option>
                                <option value = "22"> 22 </option>
                                <option value = "23"> 23 </option>
                                <option value = "24"> 24 </option>
                            </select></td>
                        </tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">Day mode with:</span></td>
                            <td><select id = "tbd">
                                <option value = "0"> 0 </option>
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                                <option value = "16"> 16 </option>
                                <option value = "17"> 17 </option>
                                <option value = "18"> 18 </option>
                                <option value = "19"> 19 </option>
                                <option value = "20"> 20 </option>
                                <option value = "21"> 21 </option>
                                <option value = "22"> 22 </option>
                                <option value = "23"> 23 </option>
                            </select></td>
                            <td align = "right"><span class="opt_cn">to:</span></td>
                            <td><select id = "tbn">
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                                <option value = "16"> 16 </option>
                                <option value = "17"> 17 </option>
                                <option value = "18"> 18 </option>
                                <option value = "19"> 19 </option>
                                <option value = "20"> 20 </option>
                                <option value = "21"> 21 </option>
                                <option value = "22"> 22 </option>
                                <option value = "23"> 23 </option>
                                <option value = "24"> 24 </option>
                            </select></td>
                        </tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">Brightness during the day:</span></td>
                            <td><select id = "vbd">
                                <option value = "0"> 0 </option>
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                            </select></td>
                            <td align = "right"><span class="opt_cn">at night:</span></td>
                            <td><select id = "vbn">
                                <option value = "0"> 0 </option>
                                <option value = "1"> 1 </option>
                                <option value = "2"> 2 </option>
                                <option value = "3"> 3 </option>
                                <option value = "4"> 4 </option>
                                <option value = "5"> 5 </option>
                                <option value = "6"> 6 </option>
                                <option value = "7"> 7 </option>
                                <option value = "8"> 8 </option>
                                <option value = "9"> 9 </option>
                                <option value = "10"> 10 </option>
                                <option value = "11"> 11 </option>
                                <option value = "12"> 12 </option>
                                <option value = "13"> 13 </option>
                                <option value = "14"> 14 </option>
                                <option value = "15"> 15 </option>
                            </select></td>
                        </tr>
                        <tr>
                    </table>
                    <label class="switch"><span class="opt_cn">Show only watches at night</span>
                        <input type="checkbox" id="clockNight">
                        <span class="switch-btn"></span>
                    </label>
                    <br>
                    <label class="switch"><span class="opt_cn">Automatic brightness level</span>
                        <input type="checkbox" id="vba">
                        <span class="switch-btn"></span>
                    </label>
                    <div class="informer">
                        <span class="opt_cn">Brightness level of photoresistor (0-15): </span>{{lba}}
                    </div>
                    <label class="switch"><span class="opt_cn">Use active buzzer</span>
                        <input type="checkbox" id="buzzerSet">
                        <span class="switch-btn"></span>
                    </label>
                    <table>
                        <tr>
                            <td align = "right"><span class="opt_cn">Room temperature sensor</span></td>
                            <td><select id = "sensorDom">
                                <option value = "NONE"> NONE </option>
                                <option value = "DS18B20"> DS18B20 </option>
                                <option value = "SI7021"> SI7021 </option>
                                <option value = "BMP280"> BMP280 </option>
                                <option value = "BME280"> BME280 </option>
                                <option value = "DHT22"> DHT22 </option>
                                <option value = "MQTT"> MQTT </option>
                            </select></td>
                        </tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">Outdoor temperature sensor</span></td>
                            <td><select id = "sensorUl">
                                <option value = "NONE"> NONE </option>
                                <option value = "DS18B20"> DS18B20 </option>
                                <option value = "SI7021"> SI7021 </option>
                                <option value = "BMP280"> BMP280 </option>
                                <option value = "BME280"> BME280 </option>
                                <option value = "DHT22"> DHT22 </option>
                                <option value = "MQTT"> MQTT </option>
                            </select></td>
                        </tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">Room humidity sensor</span></td>
                            <td><select id = "sensorHumi">
                                <option value = "NONE"> NONE </option>
                                <option value = "SI7021"> SI7021 </option>
                                <option value = "BME280"> BME280 </option>
                                <option value = "DHT22"> DHT22 </option>
                            </select></td>
                        </tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">The pressure sensor is of the same height</span></td>
                            <td><select id = "sensorPrAl">
                                <option value = "NONE"> NONE </option>
                                <option value = "BMP280"> BMP280 </option>
                                <option value = "BME280"> BME280 </option>
                            </select></td>
                        </tr>
                        <tr><td align = "right">______________________</td></tr>
                        <tr>
                            <td align = "right"><span class="opt_cn">Screen rotation angle</span></td>
                            <td><select id = "rotate">
                                <option value = "0"> 0 </option>
                                <option value = "90"> 90 </option>
                                <option value = "270"> 270 </option>
                            </select></td>
                        </tr>
                    </table>
                    <span class="save_booton" onclick="set_led(this);">Save</span>
                </center>
            </div>
            <div class="menu_unit" id="langs">
                <a><span class="ico__text" onclick="set_lang_f(this, 'EN');">EN</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'UA');">UA</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'RU');">RU</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'PL');">PL</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'CZ');">CZ</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'DE');">DE</span></a>
            </div>
        </central-unit>
    </body>
</html>
)=====";
