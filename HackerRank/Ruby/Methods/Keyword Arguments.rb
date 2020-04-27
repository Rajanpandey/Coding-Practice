def convert_temp(temp, input_scale:, output_scale: 'Celsius')
    case input_scale.downcase
    when 'fahrenheit'
        return output_scale == 'kelvin' ? 
        ((temp - 32) / 1.8) + 273.15 : (temp - 32) / 1.8
    when 'celsius'
        return output_scale == 'kelvin' ? 
        temp + 273.15 : (temp * 1.8) + 32
    when 'kelvin'
        return output_scale == 'celsius' ? 
        temp - 273.15 : (temp - 273.15) * 1.8
    end
end